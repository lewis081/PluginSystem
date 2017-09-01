#include "phonefactory.h"


PhoneFactory::~PhoneFactory()
{

}

PhoneFactory *PhoneFactory::instance()
{
    static PhoneFactory fac;//atomic operation?
    return &fac;
}

IPhone *PhoneFactory::getPhone(QString name)
{
    if(_phoneSheet.contains(name)){
        return _phoneSheet.value(name);
    }else{
        return _phoneSheet.value("Unknow");
    }

}

void PhoneFactory::registerPhone(QString name, IPhone * phone)
{
    _phoneSheet.insert(name, phone);
}

PhoneFactory::PhoneFactory()
{

}
