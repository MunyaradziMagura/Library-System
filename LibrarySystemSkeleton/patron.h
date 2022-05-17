#pragma once
#include "user.h"
class patron :
    public user
{
private:
    void borrowItem();
    void returnItem();
    void payBill();
    void placeHold();
public:
    patron(int id, string name, string lName, string email): user(id,name,lName, email){}
};

