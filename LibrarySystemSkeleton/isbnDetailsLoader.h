#pragma once
#include <string>
using namespace std;
class isbnDetailsLoader
{
private:

public:
	virtual string loadItemDetails(string isbn) = 0;
};

