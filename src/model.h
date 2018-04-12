#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QPair>

#include "person.h"

class Model : public QObject
{
    Q_OBJECT

private:
    QList<Person *> characters;

public:
    explicit Model(QObject *parent = nullptr);

    QList<QString>                      *getCharacters();
    QList<QString>                      *getScenes();
    QList< QPair<QString, QString> >    *getParameters(QString const &character);
    QList<QString>                      *getEffects(QString const &character);
    QString                             *getCharacterDescription(QString const &character);
    QString                             *getSceneDescription(QString const &scene);

    void                                 addCharacter(Person *character);
    void                                 editParameters(QString charName, QList< QPair<QString, QString> > *newParms);
    void                                 editEffects(QString charName, QList<QString> *effects);

signals:
    void updated();

public slots:
};

#endif // MODEL_H
