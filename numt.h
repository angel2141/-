#ifndef NUMT_H
#define NUMT_H

#include <QObject>

class numt : public QObject
{
    Q_OBJECT
public:
    explicit numt(QObject *parent = nullptr);

signals:
//信号检测
    void numtest();

public slots:
};

#endif // NUMT_H
