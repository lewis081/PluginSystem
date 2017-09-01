#include <QCoreApplication>
#include <QDebug>

#include "phonefactory.h"
#include "phones.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    IPhone* phone = PhoneFactory::instance()->getPhone("HTC");
    qDebug()<< phone->name();
    delete phone;
    phone = 0;

    phone = PhoneFactory::instance()->getPhone("Apple");
    qDebug()<< phone->name();
    delete phone;
    phone = 0;

    phone = PhoneFactory::instance()->getPhone("Huawei");
    qDebug()<< phone->name();
    delete phone;
    phone = 0;

    phone = PhoneFactory::instance()->getPhone("Apple1");
    qDebug()<< phone->name();
    delete phone;
    phone = 0;

    return a.exec();
}
