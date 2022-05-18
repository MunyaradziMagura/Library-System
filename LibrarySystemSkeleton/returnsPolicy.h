#pragma once
#include <string>
#include <ctime>
using namespace std;
#include "lendingRecord.h"
class returnsPolicy : public lendingRecord
{
private:
	lendingRecord* lendingRecord;
public:
	returnsPolicy(lendingRecord* lendingRecord) {};;
	time_t generateReturnDate() { return returnDate - borrowDate; }
};

