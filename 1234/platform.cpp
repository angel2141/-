#include "platform.h"
#include <QLabel>
#include <QFont>
#include <QPushButton>

platform::platform(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600,600);
    setWindowTitle("药品管理系统");

    QLabel *label = new QLabel("药品管理系统");
    QFont font;
    font.setPointSize(20);
    label->setFont(font);
    label->setParent(this);
    label->move(210,80);

    a1->resize(600,100);
    a1->move(0,150);
    a2->resize(600,100);
    a2->move(0,250);
    a3->resize(600,100);
    a3->move(0,350);
    a4->resize(600,100);
    a4->move(0,450);

    connect(a1,&QPushButton::clicked,this,&platform::change1);
    connect(a2,&QPushButton::clicked,this,&platform::change2);
    connect(a3,&QPushButton::clicked,this,&platform::change3);
    connect(a4,&QPushButton::clicked,this,&platform::close);
}

void platform::change1()
{
    add.show();
    this->show();
}

void platform::change2()
{
    check.show();
    this->show();
}

void platform::change3()
{
    buy.show();
    this->show();
}
