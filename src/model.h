#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QList>
#include <QPair>

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);

    QList<QString>                      *getCharacters();
    QList<QString>                      *getScenes();
    QList< QPair<QString, QString> >    *getParameters(QString &character);
    QList<QString>                      *getEffects(QString &character);
    QString                             *getCharacterDescription(QString &character);
    QString                             *getSceneDescription(QString &scene);

signals:

public slots:
};

#endif // MODEL_H
