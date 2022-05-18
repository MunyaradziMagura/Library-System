#pragma once
#include "returnsPolicy.h"
class newReleaseReturnsPolicy :
    public returnsPolicy
{
public:
    time_t generateReturnDate() {};
};

