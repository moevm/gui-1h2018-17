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
    Person(QString name, QString descr);

    QString name;
    QString description;
    QList<Parameter *> parameters;
    QList<Effect *> effects;
};

#endif // PERSON_H
