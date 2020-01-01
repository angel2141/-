#include "buy_med.h"
#include "ui_buy_med.h"
#include <QFont>

Buy_Med::Buy_Med(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Buy_Med)
{

    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&Buy_Med::serch);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Buy_Med::buy);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Buy_Med::exit);
    QFont font;
    font.setPointSize(12);

}

void Buy_Med::serch()
{
    ui->textBrowser->setText("");
    MedData *node = head;
    namec = this->ui->lineEdit->text();
    while(node->name != namec)
    {
        pre = node;
        node = node->next;
        if(node == NULL)
        {
            ui->label->setText("没有这个药");
            return ;
        }
    }
    int numc = node->num;
    QString namecQ= node->name;
    QString sortcQ= node->sort;
    int amountc = node->amount;
    float pricec = node->price;
    QString numcQ = QString::number(numc);
    QString amountcQ = QString::number(amountc);
    QString pricecQ = QString::number(pricec);
    ui->textBrowser->append("   "+numcQ+"\t  "+namecQ+" \t  "+sortcQ+"    "+amountcQ+"\t"+pricecQ);
    saves = node;
}

void Buy_Med::buy()
{
    int i;
    numc = this->ui->lineEdit_2->text();
    i = numc.toInt();
    if(i > saves->amount)
    {
        this->ui->label_3->setText("超出药品最大数量");
    }
    else
    {
        saves->amount = saves->amount - i;
        if(saves->amount == 0)
        {
            pre->next = saves->next;
            delete saves;
        }

    }
}

void Buy_Med::exit()
{
    this->ui->textBrowser->setText("");
    this->close();
}


Buy_Med::~Buy_Med()
{
    delete ui;
}

