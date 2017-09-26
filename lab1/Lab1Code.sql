CREATE TABLE GOODS (GName CHAR(16) PRIMARY KEY,
				   GType CHAR(6));
CREATE TABLE PLAZA (PName CHAR(16) PRIMARY KEY,
				   PRegion CHAR(6));

CREATE TABLE SALE (GName CHAR(16),
				   PName CHAR(16),
				   Price FLOAT,
				   Discount CHAR(6),
				   PRIMARY KEY (GName, PName),
				   FOREIGN KEY (GName) REFERENCES GOODS(GName),
				   FOREIGN KEY (PName) REFERENCES PLAZA(PName));

INSERT INTO GOODS VALUES
('创维*电视', '电器'),
('格力*空调', '电器'),
('海尔*冰箱', '电器'),
('小天鹅*洗衣机', '电器'),
('老人头*T恤', '服装'),
('Lee*牛仔裤', '服装'),
('哈森*皮鞋', '服装'),
('七匹狼*夹克', '服装'),
('晨光*中性笔', '文具'),
('得力*笔记本', '文具'),
('老干妈*辣酱', '食品'),
('奥利奥*饼干', '食品'),
('海天*酱油', '食品');

INSERT INTO PLAZA VALUES
('群光广场', '武昌'),
('新世界百货', '汉口'),
('汉商购物中心', '汉阳'),
('大洋百货', '武昌'),
('校园超市', '武昌'),
('王府井百货', '汉口');

INSERT INTO SALE VALUES
('创维*电视', '群光广场', 3188, '打折'),
('格力*空调', '群光广场', 4588, '打折'),
('海尔*冰箱', '汉商购物中心', 3888, null),
('Lee*牛仔裤', '汉商购物中心', 500, '送券'),
('晨光*中性笔', '汉商购物中心', 1.5, null),
('得力*笔记本', '汉商购物中心', 5, null),
('奥利奥*饼干', '汉商购物中心', 8, null),
('小天鹅*洗衣机', '大洋百货', 2288, null),
('格力*空调', '大洋百货', 4388, '打折'),
('老人头*T恤', '大洋百货', 1200, '送券'),
('Lee*牛仔裤', '大洋百货', 389, '打折'),
('哈森*皮鞋', '大洋百货', 300, '打折'),
('老干妈*辣酱', '大洋百货', 9, null),
('七匹狼*夹克', '新世界百货', 800, '打折'),
('晨光*中性笔', '校园超市', 1, null),
('得力*笔记本', '校园超市', 4.5, null),
('奥利奥*饼干', '校园超市', 8.5, null);

UPDATE SALE
SET Price = 3998, Discount = NULL
WHERE PName = '群光广场' AND
	  GName = '创维*电视';
	  
DELETE FROM SALE_CHEAP
WHERE PName = '群光广场' AND
	  GName = '创维*电视';
	  
CREATE VIEW SALE_CHEAP_AVG (AVGPrice)
AS
SELECT AVG(Price)
FROM SALE_CHEAP;	  
	  
--查询所有没有任何促销活动的商品及其所在的商场，结果按照商品名排序
SELECT GName, PName
FROM SALE
WHERE Discount IS NULL
ORDER BY GName;

--查询价格在200～500元之间的商品名称、所在的商场名称、价格，结果按照商场名称排序
SELECT GName, PName, Price
FROM SALE
WHERE Price <= 500 AND
	  Price >= 200
ORDER BY PName;

--查询每种商品的商品名称、最低售价、最高售价
SELECT GName, MIN(Price) MinPrice, MAX(Price) MaxPrice
FROM SALE
GROUP BY GName;

--查询以“打折”方式销售的商品总数超过2种的商场名称及其所在地区
SELECT PName, PRegion
FROM PLAZA, (SELECT PName, COUNT(Discount) DcNum
			 FROM SALE
			 WHERE Discount = '打折'
			 GROUP BY PName) AS DcCount(DcPName, DcNum)
WHERE PName = DcPName AND
	  DcNum > 2;

--查询以“老”字开头的所有商品的名称
SELECT GName
FROM GOODS
WHERE GName like '老%';

--查询同时销售“晨光*中性笔”和“得力*笔记本”的商场名称
SELECT PName
FROM PLAZA
WHERE 2 = (SELECT COUNT(GName)
		   FROM SALE
		   WHERE SALE.PName = PLAZA.PName AND
		   		 (SALE.GName = '晨光*中性笔' OR
		   		  SALE.GName = '得力*笔记本'));

--查询未举办任何活动的商场		   		  
SELECT DISTINCT PName
FROM SALE SALE1
WHERE 0 = (SELECT COUNT(Discount)
		   FROM SALE SALE2
		   WHERE SALE2.PName = SALE1.PName);
--包括没有商品记录的
SELECT PName
FROM PLAZA
WHERE 0 = (SELECT COUNT(Discount)
		   FROM SALE
		   WHERE SALE.PName = PLAZA.PName);

--查询出售商品种类最多的商场名称
SELECT PName
FROM SALE
GROUP BY PName
HAVING COUNT(GName) >= ALL (SELECT COUNT(GName)
							FROM SALE
							GROUP BY PName);

--查询出售商品类型最多的商场名称
SELECT PName
FROM SALE, GOODS
WHERE SALE.GName = GOODS.GName
GROUP BY PName
HAVING COUNT(DISTINCT GType) >= ALL (SELECT COUNT(DISTINCT GType)
							FROM SALE, GOODS
							WHERE SALE.GName = GOODS.GName
							GROUP BY PName);

--查询所销售的商品包含了“校园超市”所销售的所有商品的商场名称
SELECT PName 
FROM PLAZA
WHERE NOT EXISTS 
	(SELECT * 
	 FROM GOODS
	 WHERE GName IN
	 		(SELECT GName
	 	 	 FROM SALE
	 	 	 WHERE PName = '校园超市') AND
	 	   NOT EXISTS
	 	  	(SELECT *
	 	  	 FROM SALE
	 	  	 WHERE SALE.PName = PLAZA.PName AND
	 	  	 	   SALE.GName = GOODS.GName));
	 	  	 	   
--在SALE表中增加一个活动截止时间列
ALTER TABLE SALE
ADD Deadline TIMESTAMP;

--查出所有在整点时刻截止活动的商品
SELECT GName
FROM SALE
WHERE MINUTE(Deadline) = 0 AND
	  SECOND(Deadline) = 0;
	  
--查询活动截止时间在本月最后一天的SALE记录
SELECT *
FROM SALE
WHERE DATEDIFF(DY, Deadline, LAST_DAY(CURRENT_TIMESTAMP())) = 0;

--查询截止时间在2016年的SALE记录
SELECT *
FROM SALE
WHERE YEAR(Deadline) = 2016;

--查询本月的最后一天
SELECT LAST_DAY(CURRENT_TIMESTAMP());

--将所有打折商品的活动截止时间推迟一个小时
UPDATE SALE
SET Deadline = TIMESTAMPADD(SQL_TSI_HOUR, 1, Deadline);
COMMIT;

--将查询结果的某些列的某些值转换成特殊的形式（例如：若商场所在地区为武昌，则在所在地区列中显示“附近”；否则显示“遥远”）
SELECT  PName, PRegion, REPLACE(REPLACE(REPLACE(PRegion, '武昌', '附近'), '汉阳', '遥远'), '汉口', '遥远') Distance
FROM PLAZA;

--查询价格个位数为8元的商品名称、所在商场名称和价格
SELECT  GName, PName, Price
FROM SALE
WHERE FLOOR(Price)%10 = 8;


--假设品牌名不可能包含“*”号，查询所有商品的品牌
SELECT  SUBSTR(GName, 1, INSTR(GName, '*') - 1) BRAND
FROM GOODS;

--事务
CREATE TABLE R (A CHAR(4), B INT);
INSERT INTO R VALUES ('C1', 40), ('C2', 50), ('C3', 60);

--T1
START TRANSACTION
UPDATE R SET B=22 WHERE A='C1';
INSERT INTO R VALUES('C4', 0);
UPDATE R SET B=38 WHERE A='C1';
COMMIT

--T2
START TRANSACTION
SET TRANSACTION ISOLATION LEVEL READ COMMITTED;
SELECT SUM(B) FROM R;
SELECT AVG(B) FROM R；
COMMIT;