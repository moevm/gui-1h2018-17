#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QPair>

#include "person.h"
#include "scene.h"
#include "parameter.h"

class Model : public QObject
{
    Q_OBJECT

private:

    QList<Scene *> scenes;
    QList<Person *> characters;
public:

    explicit Model(QObject *parent = nullptr);
    //это временная замена для param_list
    QString param_list[4] = {"хитрость", "убийственность", "магия", "сила"};
    int param_length = 4;

    QList<QString>                      *getCharacters();
    QList<QString>                      *getScenes();
    QList< QPair<QString, QString> >    *getParameters(QString const &character);
    QList<QString>                      *getEffects(QString const &character);
    QString                             *getCharacterDescription(QString const &character);
    QString                             *getSceneDescription(QString const &Scene);

    void                                 addCharacter(Person *character);
    void                                 addScene(Scene *scena);
    void                                 editParameters(QString charName, QList< QPair<QString, QString> > *newParms);
    void                                 editEffects(QString charName, QList<QString> *effects);

     //добавила геттер списка персонажей (объектов, а не имен) - для проверки корректности добавления параметров
    QList<Person *>                      getCharacters_debug();

signals:
    void updated();

public slots:
};

#endif // MODEL_H
