#ifndef PHONE2_H
#define PHONE2_H

#include <QString>
#include "iphone.h"

class HTC: public IPhone
{
public:
    QString name();
    IPhone* createInstance();
};

class Unknow: public IPhone
{
public:
    QString name();
    IPhone* createInstance();
};

#endif // PHONE2_H
