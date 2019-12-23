#include "mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(300,600);
    setWindowTitle("药物管理系统");
    QLabel *label = new QLabel("登录");
    QFont font;
    font.setPointSize(20);
    label->setFont(font);
    label->setParent(this);
    label->move(120,-80);

    QLineEdit *lineedit =new QLineEdit;
    lineedit->setParent(this);
    lineedit->setPlaceholderText("账号");
    lineedit->resize(200,30);
    lineedit->move(55,220);
    QString num=lineedit->text();

    QLineEdit *lineedit1 =new QLineEdit;
    lineedit1->setParent(this);
    lineedit1->setPlaceholderText("密码");
    lineedit1->resize(200,30);
    lineedit1->move(55,280);
    QString pas=lineedit1->text();

    QPushButton *login = new QPushButton("登录",this);
    login->move(100,370);
}

MainWindow::~MainWindow()
{

}
