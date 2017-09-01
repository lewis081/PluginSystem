#ifndef IPHONE_H
#define IPHONE_H

#include <QString>


#define interface struct

interface IPhone
{
public:
    virtual QString name() = 0;
    virtual IPhone* createInstance() = 0;
};





#endif // IPHONE_H
