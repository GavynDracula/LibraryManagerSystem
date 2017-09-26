#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QDate>
#include <QtSql>

#include "modifydialog.h"
#include "inputdialog.h"
#include "deletedialog.h"
#include "inquiredialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void ConnectDB();
    void SaveDB();
    void Input();
    void Modify();
    void DeleteData();
    void Revert();
    void SelectOnes();
    void SelectAll();
    void AboutProgram();
    void AboutMe();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQueryModel * model;
    QMessageBox* msgBox;
};

#endif // MAINWINDOW_H
