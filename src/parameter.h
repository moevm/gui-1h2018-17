#ifndef PARAMETER_H
#define PARAMETER_H


class Parameter
{
public:
    int id_from_param_list;        // id параметра из того глобального листа

    Parameter();
    Parameter(int param_in_list, int value);
    int getValue();
    void setValue(int param_in_list, int value);    //чтобы установить значение конкретного параметра для данного персонажа,
    //                                              надо знать id параметра в глобальном списке параметров,
    //                                              а также значение этого параметра для персонажа
private:
    int value;                      //значение параметра именно для конкретного персонажа
};

#endif // PARAMETER_H
