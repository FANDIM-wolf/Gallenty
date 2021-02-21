#include "userwindow.h"
#include "ui_userwindow.h"
#include "mainwindow.h"
#include <QSqlError>
#include <QSqlRecord>
#include <stdlib.h>
#include <ctime>
userwindow::userwindow(QWidget *parent) :
    QWidget(parent),
    userwindowui(new Ui::userwindow)
{
    userwindowui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE"); // type of data base
    db.setDatabaseName("D:/listuser.db");
    if(db.open()){
        userwindowui->label_5->setText("DB is connected");
    }




}

userwindow::~userwindow()
{
    delete userwindowui ;
}


void userwindow::on_pushButton_clicked()
{

    int result = 1 + (rand() % 123);
    QString name = userwindowui->lineEdit->text();
    QString position = userwindowui->lineEdit_2->text();
    QString Age_text = userwindowui->lineEdit_3->text();
    int Age=Age_text.toInt();
    QSqlQuery db;
    db.exec("INSERT INTO users(ID,NAME,POSITION,AGE)VALUES(?,?,?,?)");
    db.addBindValue(result);
    db.addBindValue(name);
    db.addBindValue(position);
    db.addBindValue(Age);
    db.exec();



}
//create table for data base
void userwindow::on_pushButton_2_clicked()
{
    QSqlQuery query;
    QString str = "CREATE TABLE addressbook("
        "number INTEGER PRIMARY KEY NOT NULL,"
        "name VARCHAR(30),"
        "phone VARCHAR(12),"
        "email VARCHAR(15)"

");";

    //execute this command and test it
    if(query.exec(str)){
        userwindowui->label_5->setText("Tabel Created");
    }
}
