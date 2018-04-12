#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include "parameter.h"
#include "effect.h"

class person
{
public:
    person();
    QString name;
    QList<parameter>* parameters;
    QList<effect>* effects;
};

#endif // PERSON_H
