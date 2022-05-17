#pragma once
#include "user.h"
class librarian :
    public user
{
public:
    librarian(int id, string name, string lName, string email) : user(id, name, lName, email) {}
};

