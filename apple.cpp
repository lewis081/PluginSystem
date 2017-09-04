#include "apple.h"
#include "phonefactory.h"

QString Apple::name()
{

    return "Apple";
}

IPhone *Apple::createInstance()
{
    return new Apple;
}





QString Huawei::name()
{
    return "Huawei";
}

IPhone *Huawei::createInstance()
{
    return new Huawei;
}

REGISTER_PHONE(Apple)
REGISTER_PHONE(Huawei)

