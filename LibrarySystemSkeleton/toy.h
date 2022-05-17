#pragma once
#include "item.h"
class toy :
    public item
{
public:
    toy(int _registrationCode, string _title, int _year, string _type, bool _state) : item(_registrationCode, _title, _year, _type, _state) {}
};

