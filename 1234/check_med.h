#ifndef CHECK_MED_H
#define CHECK_MED_H

#include <QWidget>
#include "meddata.h"

namespace Ui {
class Check_med;
}

class Check_med : public QWidget
{
    Q_OBJECT

public:
    explicit Check_med(QWidget *parent = 0);
    void look();
    ~Check_med();

private:
    Ui::Check_med *ui;
};

#endif // CHECK_MED_H
