#ifndef PARAM_LIST_H
#define PARAM_LIST_H
#include <QPair>


class param_list    //в этом списке хранится id параметра и значение (строка)
{
public:
    explicit param_list() ;
    QString* get_param_name(int index);     //по индексу возвращает занчение из этого массива
private:

    QString* array[5];

};

#endif // PARAM_LIST_H
