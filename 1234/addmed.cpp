#include <QString>
#include <QFont>
#include "addmed.h"
#include "ui_addmed.h"
#include "meddata.h"


AddMed::AddMed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMed)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&AddMed::change);
    connect(ui->pushButton,&QPushButton::clicked,this,&AddMed::savedata);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&AddMed::clear);
}

void AddMed::savedata()
{

    int i=1;
    QFont font;
    QString numb = this->ui->lineEdit->text();
    QString nameb = this->ui->lineEdit_2->text();
    QString sortb = this->ui->lineEdit_3->text();
    QString amountb = this->ui->lineEdit_4->text();
    QString priceb = this->ui->lineEdit_5->text();

    if(i=0)
    {
        medata->next = new MedData;
        medata = medata->next;
        i--;
    }
    else if(medata->name != NULL)
    {
        medata->next = new MedData;
        medata = medata->next;
    }
    medata->num = numb.toInt();
    medata->name = nameb;
    medata->sort = sortb;
    medata->amount = amountb.toInt();
    medata->price = priceb.toFloat();
    i--;

    font.setPointSize(12);
    this->ui->textBrowser->append("  "+numb+"\t"+nameb+" \t    "+sortb+"    "+amountb+"\t"+priceb);
    this->ui->textBrowser->setFont(font);
    a++;



}

void AddMed::clear()
{
    this->ui->lineEdit->setText("");
    this->ui->lineEdit_2->setText("");
    this->ui->lineEdit_3->setText("");
    this->ui->lineEdit_4->setText("");
    this->ui->lineEdit_5->setText("");
}

void AddMed::change()
{
    this->ui->textBrowser->setText("");
    medata->next = NULL;
    this->close();
}

AddMed::~AddMed()
{
    delete ui;
}

