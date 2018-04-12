#ifndef SCENE_H
#define SCENE_H

#include <QString>
#include "effect.h"

class scene
{
public:
    scene();
    QString name;
    QString descr;
    QList<Effect>* effects;
};

#endif // SCENE_H