#include "platform.h"

platform::platform(QWidget *parent) : QWidget(parent)
{
    setFixedSize(600,600);
    setWindowTitle("药品管理系统");
    a1->resize(300,100);
    a1->move(150,150);
    a2->resize(300,100);
    a2->move(150,250);
    a3->resize(300,100);
    a3->move(150,350);
    a4->resize(300,100);
    a4->move(150,450);
}
