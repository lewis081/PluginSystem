#ifndef PHONEFACTORY_H
#define PHONEFACTORY_H

#include <QHash>
#include "iphone.h"

class PhoneFactory
{
public:
    ~PhoneFactory();

    static PhoneFactory* instance();

    IPhone* getPhone(QString name);

    void registerPhone(QString name, IPhone*phone);

private:
     PhoneFactory();
     QHash<QString, IPhone*> _phoneSheet;
};

#define REGISTER_PHONE(name) \
    static IPhone* create##name() {\
            return new name;\
        }\
    class HELPER_##name { \
    public: \
        HELPER_##name() { \
            PhoneFactory::instance()->registerPhone(#name, create##name()); \
        } \
    }; \
    static HELPER_##name static##name;


#endif // PHONEFACTORY_H
