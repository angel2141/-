#include "mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(300,600);
    setWindowTitle("药物管理系统——登录");
    //登录标题
    QLabel *label = new QLabel("登录");
    QFont font;
    font.setPointSize(20);
    label->setFont(font);
    label->setParent(this);
    label->move(120,-80);

    //账号框

    lineedit->setParent(this);
    lineedit->setPlaceholderText("账号");
    lineedit->resize(200,30);
    lineedit->move(55,220);
    lineedit->setMaxLength(5);

    //密码框
    lineedit1->setParent(this);
    lineedit1->setPlaceholderText("密码");
    lineedit1->resize(200,30);
    lineedit1->move(55,280);
    lineedit1->setMaxLength(6);
    lineedit1->setEchoMode(QLineEdit::Password);



    //登录按钮
    login->move(100,370);
    login->resize(100,30);
    connect(login,&QPushButton::clicked,this,&MainWindow::change);


}

void MainWindow::change()
{
    QString num = lineedit->text();
    QString pas = lineedit1->text();
    int s = num.toInt();
    int f = pas.toInt();
    if(s==1234&&f==123456)
    {
    this->close();
    plat.show();
    }
}

MainWindow::~MainWindow()
{

}
