#include "phone2.h"
#include "phonefactory.h"

QString HTC::name()
{

    return "HTC";
}

IPhone *HTC::createInstance()
{
    return new HTC;
}




QString Unknow::name()
{
    return "Unknow";
}

IPhone *Unknow::createInstance()
{
    return new Unknow;
}

REGISTER_PHONE(HTC)
REGISTER_PHONE(Unknow)

