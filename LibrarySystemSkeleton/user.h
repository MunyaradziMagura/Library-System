#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

class user
{
private:
	int personID;
	string fistName;
	string lastName;
	string emailAddress;
public:
	user(int _personID, string _fistName,string _lastName,string _emailAddress) {
		personID = _personID;
		fistName = _fistName;
		lastName = _lastName;
		emailAddress = _emailAddress;

	}
	void search();

};

