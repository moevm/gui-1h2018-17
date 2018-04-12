#ifndef EFFECT_H
#define EFFECT_H
#include <QString>

class Effect
{
public:
    Effect();
    Effect(QString name);
    QString name;
    QString descr;
    bool category;      //эффект персонажа или сцены
};

#endif // EFFECT_H
