#include "userwindow.h"
#include "ui_userwindow.h"
#include "mainwindow.h"
userwindow::userwindow(QWidget *parent) :
    QWidget(parent),
    userwindowui(new Ui::userwindow)
{
    userwindowui->setupUi(this);
}

userwindow::~userwindow()
{
    delete userwindowui ;
}
