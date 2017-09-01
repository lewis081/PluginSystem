#ifndef PHONES_H
#define PHONES_H

#include <QString>
#include "iphone.h"

class Apple: public IPhone
{
public:
    QString name();
    IPhone* createInstance();
};

class Huawei: public IPhone
{
public:
    QString name();
    IPhone* createInstance();
};



#endif // PHONES_H
