#include "parameter.h"

Parameter::Parameter(int param_in_list, int value)
{
    this->id_from_param_list = param_in_list;
    this ->value = value;
}

int Parameter::getValue() {
    return this->value;
}

void Parameter::setValue(int param_in_list,int value) {
    this->id_from_param_list = param_in_list;
    this->value = value;
}
