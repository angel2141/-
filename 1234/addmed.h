#ifndef ADDMED_H
#define ADDMED_H

#include <QDialog>

namespace Ui {
class AddMed;
}

class AddMed : public QDialog
{
   Q_OBJECT

public:
    int amount=0;
    explicit AddMed(QWidget *parent = 0);
    void change();
    void savedata();
    void clear();
    ~AddMed();

private:
    Ui::AddMed *ui;
};

#endif // ADDMED_H
