#ifndef MEDDATA_H
#define MEDDATA_H
#include <QString>

    typedef struct MedData
    {
        int num;
        QString name;
        QString sort;
        int amount;
        float price;
        MedData *next;
    }MedData;

    extern MedData *medata;
    extern MedData *head;
    extern int a;
#endif // MEDDATA_H
