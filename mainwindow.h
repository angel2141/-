#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMainWindow>
#include <QLineEdit>
#include "platform.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void change();
    ~MainWindow();
    QLineEdit *lineedit =new QLineEdit;
    QLineEdit *lineedit1 =new QLineEdit;
    QPushButton *login = new QPushButton("登录",this);
    platform plat;
};

#endif // MAINWINDOW_H
