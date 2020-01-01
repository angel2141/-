#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>
#include "platform.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    QLineEdit *lineedit =new QLineEdit;
    QLineEdit *lineedit1 =new QLineEdit;
    QPushButton *login = new QPushButton("登录",this);
    platform plat;
    void change();
    ~MainWindow();
};

#endif // MAINWINDOW_H
