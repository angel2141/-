#include "check_med.h"
#include "ui_check_med.h"
#include <QString>

Check_med::Check_med(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check_med)
{
    QFont font;
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&Check_med::look);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Check_med::close);
    font.setPointSize(12);
    this->ui->textBrowser->setFont(font);

}

void Check_med::look()
{
    this->ui->textBrowser->setText("");
    MedData *node = head;
    while(node != NULL)
    {
        QString numa = QString::number(node->num);
        QString namea = node->name;
        QString sorta = node->sort;
        QString amounta = QString::number(node->amount);
        QString pricea = QString::number(node->price);
        ui->textBrowser->append("  "+numa+"\t"+namea+" \t    "+sorta+"    "+amounta+"\t"+pricea);
        node = node->next;
    }
}

Check_med::~Check_med()
{
    delete ui;
}
