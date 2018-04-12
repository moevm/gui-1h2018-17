#ifndef EFFECT_H
#define EFFECT_H
#include <QString>

class effect
{
public:
    effect();
    QString name;
    QString descr;
    bool category;      //эффект персонажа или сцены
};

#endif // EFFECT_H
