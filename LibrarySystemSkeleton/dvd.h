#pragma once
#include "item.h"
class dvd :
    public item
{
private:
public:
    dvd(int _registrationCode, string _title, int _year, string _type, bool _state) : item(_registrationCode, _title, _year, _type, _state) {}

};

