#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QList>
#include "parameter.h"
#include "effect.h"

class Person
{
public:
    Person();
    Person(QString name);

    QString name;
    QList<Parameter *> parameters;
    QList<Effect *> effects;
};

#endif // PERSON_H
