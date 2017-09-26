#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSql>
#include <QString>

#include "readermainwindow.h"
#include "adminmainwindow.h"

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
    void Login();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QMessageBox* msgBox;
    ReaderMainWindow* readerWindow;
    AdminMainWindow* adminWindow;
};

#endif // MAINWINDOW_H
