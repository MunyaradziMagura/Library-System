#pragma once
#include <string>
#include <ctime>
using namespace std;
class lendingRecord
{
private:
	int lendingRecordID;
	time_t borrowDate;
	time_t returnDate;
	string returnsPolicy;
public:
	lendingRecord(time_t _borrowDate, time_t _returnDate, int _lendingRecordID, string _returnsPolicy) {
		lendingRecordID = _lendingRecordID;
		returnDate = _returnDate;
		borrowDate = _borrowDate;
		returnsPolicy = _returnsPolicy;
	}
	time_t getReturnDate() { return returnDate; }
	void setReturnDate(time_t _returnDate) {
		returnDate = _returnDate;
	}
	time_t getBorrowDate() { return borrowDate; }
	void setBorrowDate(time_t _borrowDate) { borrowDate = _borrowDate; }
	time_t generateReturnDate() { return returnDate - borrowDate; };
	bool isOverDue(time_t _returnDate, time_t _currentDate) {return (_returnDate < _currentDate) ? false : true; }
};

