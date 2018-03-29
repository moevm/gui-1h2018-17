#include "model.h"

Model::Model(QObject *parent) : QObject(parent)
{

}

QList<QString> *Model::getCharacters(){
    QString *character1 = new QString("Дуся");
    QString *character2 = new QString("Олень");
    QString *character3 = new QString("Старик-рассказчик");
    QString *character4 = new QString("Редиска");
    QList<QString> *character_list = new QList<QString>();
    character_list->append(*character1);
    character_list->append(*character2);
    character_list->append(*character3);
    character_list->append(*character4);
    return character_list;
}

QList<QString> *Model::getScenes() {
    QString *scene1 = new QString("У дуба");
    QString *scene2 = new QString("У реки");
    QString *scene3 = new QString("В избушке");
    QString *scene4 = new QString("Сражение");
    QList<QString> *scene_list = new QList<QString>();
    scene_list->append(*scene1);
    scene_list->append(*scene2);
    scene_list->append(*scene3);
    scene_list->append(*scene4);
    return scene_list;
}

QList< QPair<QString, QString> > *Model::getParameters(QString const &character){
    QPair<QString, QString> *pair = new QPair<QString, QString>();
    QList < QPair<QString, QString> > *param_list = new QList < QPair<QString, QString> >();
    if (character == "Дуся") {
        pair->first = "Сила";
        pair->second = "20";
        param_list->append(*pair);
        pair->first = "Выносливость";
        pair->second = "200";
        param_list->append(*pair);
     }
    else
    if(character == "Олень") {
        pair->first = "Сила";
        pair->second = "700";
        param_list->append(*pair);
        pair->first = "Мудрость";
        pair->second = "2000000";
        param_list->append(*pair);
     }
    else
    if(character == "Старик-рассказчик") {
        pair->first = "Магия";
        pair->second = "808";
        param_list->append(*pair);
        pair->first = "Мудрость";
        pair->second = "2120";
        param_list->append(*pair);
     }
    else
    if(character == "Редиска") {
        pair->first = "Магия";
        pair->second = "6";
        param_list->append(*pair);
        pair->first = "Выносливость";
        pair->second = "21200";
        param_list->append(*pair);
     }
    return param_list;
}

QList<QString> *Model::getEffects(QString const &character) {
    QString *effect = new QString();
    QList <QString> *effect_list = new QList <QString>();
    if (character == "Дуся") {
        *effect = "Невидимость";
        effect_list->append(*effect);
    }
    else
    if(character == "Олень") {
        *effect = "Роковой удар";
        effect_list->append(*effect);
        *effect = "Золотые копыта";
        effect_list->append(*effect);
     }
    else
    if(character == "Старик-рассказчик") {
        *effect = "Нудный сказ";
        effect_list->append(*effect);
        *effect = "Мгновенное просветление";
        effect_list->append(*effect);
     }
    else
    if(character == "Редиска") {
        *effect = "Хитрый взгляд";
        effect_list->append(*effect);
    }
    return effect_list;
}

QString *Model::getCharacterDescription(QString const &character) {
    QString *character_description = new QString();
    if (character == "Дуся")
        *character_description = "opisanie";
    else
    if(character == "Олень")
        *character_description = "opisanye";
    else
    if(character == "Старик-рассказчик")
        *character_description = "описаниe";
    else
    if(character == "Редиска")
        *character_description = "нехороший человек";
    return character_description;
}


QString *Model::getSceneDescription(QString const &scene) {
    QString *scene_description = new QString();
    if (scene == "У дуба")
        *scene_description = "opisanie";
    else
    if(scene == "У реки")
        *scene_description = "opisanye";
    else
    if(scene == "В избушке")
        *scene_description = "описаниe";
    else
    if(scene == "Сражение")
        *scene_description = "битва";
    return scene_description;
}

