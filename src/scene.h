#ifndef SCENE_H
#define SCENE_H

#include <QString>
#include "effect.h"

class Scene
{
public:
    Scene();
    Scene(QString name, QString descr);
    QString name;
    QString descr;
    QList<Effect>* effects;
};

#endif // SCENE_H
