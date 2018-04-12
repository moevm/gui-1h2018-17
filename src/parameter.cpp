#include "parameter.h"

parameter::parameter(int param_in_list, int value)
{
    this->id_from_param_list = param_in_list;
    this ->value = value;
}

int parameter::getValue() {
    return this->value;
}

void parameter::setValue(int param_in_list,int value) {
    this->id_from_param_list = param_in_list;
    this->value = value;
}
