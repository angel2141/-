#ifndef PLATFORM_H
#define PLATFORM_H

#include <QWidget>
#include <QPushButton>
#include "addmed.h"
#include "check_med.h"
#include "buy_med.h"


class platform : public QWidget
{
    Q_OBJECT
public:
    explicit platform(QWidget *parent = nullptr);
    void change1();
    void change2();
    void change3();
    QPushButton *a1 = new QPushButton("1.增加药品",this);
    QPushButton *a2 = new QPushButton("2.查看现有药品",this);
    QPushButton *a3 = new QPushButton("3.药品出售",this);
    QPushButton *a4 = new QPushButton("4.退出",this);
    AddMed add;
    Check_med check;
    Buy_Med buy;
signals:

public slots:
};

#endif // PLATFORM_H
