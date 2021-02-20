#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window = new userwindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}



// from string to int and multy it in 2 degree
QString calculate_sum(QString number_of_caluclating){
    int res = number_of_caluclating.toInt();
    int result= res*res;
    QString result_string; // to String again
    result_string =QString::number(result);
    return result_string;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

}



void MainWindow::on_pushButton_clicked()
{
    QString Label_value = ui->lineEdit->text();
    calculate_sum(Label_value); // get sum
    ui->label_3->setText(calculate_sum(Label_value));
    QMessageBox::information(this ,"Result", "Test done successfully");

}

//Function new user
void MainWindow::on_newuser_triggered()
{

   window->show();
}

