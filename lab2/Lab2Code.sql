INSERT
INTO DEPARTMENT
VALUES('1', 'HumanResource', 'WangMing', 'HubeiWuhan', '18888888888'),
	  ('2', 'Technology', 'LiYong', 'HubeiWuhan', '16666666666');

INSERT INTO STAFF
VALUES('1', 'WangMing', 26, 'manager', 5000, '1'),
	  ('2', 'LiuXing', 26, 'clerk', 3000, '1'),
	  ('3', 'ZhangXin', 26, 'clerk', 3000, '1'),
	  ('4', 'LiYong', 26, 'manager', 5000, '2'),
	  ('5', 'ZhouPing', 26, 'clerk', 3000, '2'),
	  ('6', 'YangLan', 26, 'clerk', 3000, '2');

UPDATE STAFF
SET Age = 70
WHERE SName = 'LiYong';

UPDATE STAFF
SET SName = NULL
WHERE SName = 'LiYong';

UPDATE DEPARTMENT
SET DName = 'Technology'
WHERE DName = 'HumanResource';

UPDATE DEPARTMENT
SET DNum = '3'
WHERE DName = 'HumanResource';

UPDATE STAFF
SET Duty = 'manager'
WHERE SName = 'LiuXing';
--任务一、权限控制
--建表
CREATE TABLE STAFF (SNum CHAR(20),
					SName CHAR(10),
					Age INT,
					Duty CHAR(20),
					Wage FLOAT,
					DNum CHAR(20));
					
CREATE TABLE DEPARTMENT (DNum CHAR(20),
						 DName CHAR(20),
						 Manager CHAR(10),
						 Address CHAR(50),
						 Phone CHAR(16));					

--创建用户
CREATE USER WangMing IDENTIFIED BY wm12345678
LIMIT CONNECT_TIME 3;
CREATE USER LiYong IDENTIFIED BY ly12345678
LIMIT CONNECT_TIME 3;
CREATE USER LiuXing IDENTIFIED BY lx12345678
LIMIT CONNECT_TIME 3;
CREATE USER ZhangXin IDENTIFIED BY zx12345678
LIMIT CONNECT_TIME 3;
CREATE USER ZhouPing IDENTIFIED BY zp12345678
LIMIT CONNECT_TIME 3;
CREATE USER YangLan IDENTIFIED BY yl12345678
LIMIT CONNECT_TIME 3;

--(1)用户王明对两个表有 SELECT 权限
GRANT SELECT ON TABLE STAFF TO WangMing;
GRANT SELECT ON TABLE DEPARTMENT TO WangMing;

--(2)用户李勇对两个表有 INSERT 和 DELETE 权限
GRANT INSERT, DELETE ON TABLE STAFF TO LiYong;
GRANT INSERT, DELETE ON TABLE DEPARTMENT TO LiYong;

--(3)每个职工只对自己的记录有 SELECT 权限
--DM不可行
GRANT SELECT ON TABLE STAFF
WHEN USER() = SName
TO ALL;
--DM可行
CREATE VIEW MYSELF 
AS
SELECT * FROM STAFF
WHERE SName = USER;

GRANT SELECT ON MYSELF TO USER; 

--(4)用户刘星对职工表有SELECT 权力，对工资字段具有更新权
GRANT SELECT, UPDATE(Wage) ON TABLE STAFF TO LiuXing;

--(5)用户张新具有修改这两个表的结构的权力
--DM不可行
GRANT ALTER TABLE ON TABLE STAFF TO ZhangXin;
GRANT ALTER TABLE ON TABLE DEPARTMENT TO ZhangXin;

--(6)用户周平具有对两个表所有权力（读，插，改，删数据），并具有给其他用户授权的权力
GRANT ALL PRIVILEGES ON TABLE STAFF TO ZhouPing WITH GRANT OPTION;
GRANT ALL PRIVILEGES ON TABLE DEPARTMENT TO ZhouPing WITH GRANT OPTION;

--(7)用户杨兰具	有从每个部门职工中SELECT 最高工资、最低工资、平均工资的权力，他不能查看每个人的工资
CREATE VIEW DWAGE 
AS
SELECT DEPARTMENT.DName, MAX(Wage), MIN(Wage), AVG(Wage)
FROM STAFF, DEPARTMENT
WHERE STAFF.DNum = DEPARTMENT.DNum
GROUP BY DEPARTMENT.DName;

GRANT SELECT ON DWAGE TO YangLan; 

--任务2、完整性控制
--定义每个模式的主码
ALTER TABLE STAFF
ADD CONSTRAINT StaffKey PRIMARY KEY(SNum);

ALTER TABLE DEPARTMENT
ADD CONSTRAINT DepartmentKey PRIMARY KEY(DNum);

--定义参照完整性约束，要求：当部门号改变时，该部门职工记录的部门号也做出相应改变；当部门被删除时，将该部门职工记录的部门号置空
ALTER TABLE STAFF
ADD CONSTRAINT ForeignKey FOREIGN KEY(DNum) REFERENCES DEPARTMENT(DNum)
								ON DELETE SET NULL
								ON UPDATE CASCADE;
					
--职工年龄不能超过60岁
ALTER TABLE STAFF
ADD CONSTRAINT AgeRangeCheck CHECK (Age <= 60);

--职工姓名和部门名称都不允许取空值
ALTER TABLE STAFF
ADD CONSTRAINT SNameNullCheck CHECK (SName IS NOT NULL);

ALTER TABLE DEPARTMENT
ADD CONSTRAINT DNameNullCheck CHECK (DName IS NOT NULL);

--部门名称不允许重复
ALTER TABLE DEPARTMENT
ADD CONSTRAINT DNameUniCheck UNIQUE(DName);

--同一个部门不应该有一个以上的经理，并且从职工表查询得到的部门经理的信息应该与从部门表查询得到的信息一致。如果由于用户的某个操作导致了不一致现象，则以职工表的信息为准
CREATE OR REPLACE TRIGGER OneMoreBoss
BEFORE UPDATE OF Duty OR INSERT ON STAFF
FOR EACH ROW
WHEN (:NEW.Duty = 'manager')
DECLARE
Total INT;
One_More_Manager EXCEPTION FOR -20001;
BEGIN
Total = 0;
SELECT COUNT(SNum) INTO Total
FROM STAFF
WHERE Duty = 'manager' AND DNum = :NEW.DNum AND SNum != :NEW.SNum;
IF Total >= 1 
THEN RAISE One_More_Manager;
END IF;
IF Total = 0
THEN
UPDATE DEPARTMENT 
SET Manager = :NEW.SName
WHERE DNum = :NEW.DNum;
END IF;
END;

CREATE OR REPLACE TRIGGER BossUnchange
BEFORE UPDATE OF Manager ON DEPARTMENT
FOR EACH ROW
DECLARE Department_Change_Manager EXCEPTION FOR -20002;
BEGIN
RAISE Department_Change_Manager;
END

--根据输入的部门名称返回一个部门的平均工资
CREATE OR REPLACE FUNCTION AvgWage
(Name CHAR(20))
RETURN FLOAT
AS DECLARE
	AId CHAR(20);
	AvgWage FLOAT;
	GetId_Sql VARCHAR := 
		'SELECT DNum 
		FROM DEPARTMENT
		WHERE DName = ?;';
	GetAvg_Sql VARCHAR := 
		'SELECT AVG(Wage)
		FROM STAFF
		WHERE DNum = ?;';	
BEGIN
	EXECUTE IMMEDIATE GetId_Sql 
	INTO AId USING Name;
	EXECUTE IMMEDIATE GetAvg_Sql
	INTO AvgWage USING AId;
	RETURN AvgWage;
END;

SELECT AvgWage('Technology') AS AverageWage

--对所有员工进行工资调整：IT部门的员工工资上调50%；销售部门的员工工资上调20%倍；其他部门的员工工资上调10%；部门经理的工资上调1.5倍；同时满足两个调薪条件的员工按调薪幅度高者调薪
CREATE OR REPLACE PROCEDURE ImproveWage()
AS
BEGIN
UPDATE STAFF
SET Wage = Wage * 1.5
WHERE DNum = (SELECT DNum FROM DEPARTMENT WHERE DName = 'Technology');
UPDATE STAFF
SET Wage = Wage * 1.2
WHERE Duty = 'clerk' AND DNum = (SELECT DNum FROM DEPARTMENT WHERE DName = 'HumanResource');
UPDATE STAFF
SET Wage = Wage * 1.5
WHERE Duty = 'manager' AND DNum != (SELECT DNum FROM DEPARTMENT WHERE DName = 'Technology');
END;

SELECT * FROM STAFF;