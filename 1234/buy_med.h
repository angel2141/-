#ifndef BUY_MED_H
#define BUY_MED_H

#include <QDialog>
#include <QString>
#include "meddata.h"

namespace Ui {
class Buy_Med;
}

class Buy_Med : public QDialog
{
    Q_OBJECT

public:
    explicit Buy_Med(QWidget *parent = 0);
    QString namec;
    QString numc;
    void serch();
    void buy();
    void exit();
    MedData *pre;
    MedData *saves;
    ~Buy_Med();

private:
    Ui::Buy_Med *ui;
};

#endif // BUY_MED_H
