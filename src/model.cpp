#include "model.h"
#include "parameter.h"
//#include <iostream>

Model::Model(QObject *parent) : QObject(parent)
{
    this->characters.clear();
}

QList<QString> *Model::getCharacters(){
    QList<QString> *character_list = new QList<QString>();

    for (auto chr: this->characters) {
        character_list->append(chr->name);
    }

    return character_list;
}

QList<QString> *Model::getScenes() {
    QList<QString> *scene_list = new QList<QString>();

    for (auto sce: this->scenes) {
        scene_list->append(sce->name);
    }

    return scene_list;
    //ниже временная реализация
    /*QString *scene1 = new QString("У дуба");
    QString *scene2 = new QString("У реки");
    QString *scene3 = new QString("В избушке");
    QString *scene4 = new QString("Сражение");
    QList<QString> *scene_list = new QList<QString>();
    scene_list->append(*scene1);
    scene_list->append(*scene2);
    scene_list->append(*scene3);
    scene_list->append(*scene4);
    return scene_list;*/
}

QList< QPair<QString, QString> > *Model::getParameters(QString const &character){
    QPair<QString, QString> *pair = new QPair<QString, QString>();
    QList < QPair<QString, QString> > *this_person_param_list = new QList < QPair<QString, QString> >();

    for (auto chr: this->characters) {
        if (chr->name == character) {
            for (auto param: chr->parameters) {
                pair->first = param_list[param->id_from_param_list];
                pair->second = param->getValue();
                this_person_param_list->append(*pair);
            }
        }
    }
//ниже временная реализация
    /*if (character == "Дуся") {
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
     }*/
    return this_person_param_list;
}

QList<QString> *Model::getEffects(QString const &character) {
    QList <QString> *effect_list = nullptr;

    for (auto chr: this->characters) {
        if (chr->name == character) {
            effect_list = new QList<QString>();

            for (auto effect: chr->effects)
                effect_list->append(effect->name);
            break;
        }
    }

//временная реализация
    //QString *effect = new QString();
    /*if (character == "Дуся") {
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
    }*/
    return effect_list;
}

QString *Model::getCharacterDescription(QString const &character) {
    QString *character_description = new QString();

    for (auto chr: this->characters) {
        if (chr->name == character) {
            //std::cout<<character.toStdString();  //for debug
            *character_description = chr->description;
        }
    }

    return character_description;

    //Ниже временная реализация
   /* if (character == "Гудвин")
        *character_description = "opisanie";
    else
    if(character == "Olen")
        *character_description = "opisanye";
    else
    if(character == "Старик-рассказчик")
        *character_description = "описаниe";
    else
    if(character == "Rediska")
        *character_description = "нехороший человек";
    return character_description;*/
}


QString *Model::getSceneDescription(QString const &scene) {
    QString *scene_description = new QString();
    for (auto sce: this->scenes) {
        if (sce->name == scene) {
            //std::cout<<character.toStdString();  //for debug
            *scene_description = sce->descr;
        }
    }
    return scene_description;

//ниже временная реализация
/*    if (scene == "У дуба")
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
    return scene_description;*/
}

void Model::addCharacter(Person *character) {
    this->characters.append(character);
}

void Model::addScene(Scene *scena) {
    this->scenes.append(scena);
}

void Model::editParameters(QString charName, QList<QPair<QString, QString> > *newParms)
{
    QString name;
    int value;

    /*for (auto chr: this->characters) {
        if (chr->name == charName) {
            for (auto pair: *newParms) {
                name = pair.first;
                value = pair.second.toInt();
                for (auto param: chr->parameters) {
                    if (param.)
                }
            }

            break;
        }
    }*/
}

void Model::editEffects(QString charName, QList<QString> *effects)
{
    for (auto chr: this->characters) {
        if (chr->name == charName) {
            chr->effects.clear();
            for (auto effect: *effects) {
                chr->effects.append(new Effect(effect));
            }
        }
    }
}

QList<Person *> Model::getCharacters_debug(){
    return this->characters;
}
