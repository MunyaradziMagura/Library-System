#pragma once
#include <ctime>
#include <string>
#include <vector>
using namespace std;
class item
{
private:
	int registrationCode;
	string title;
	int year;
	string type; // not sure about the type string here 
	bool state;
public:
	item(int _registrationCode,string _title,int _year,string _type,bool _state) {
		 registrationCode = _registrationCode;
		 title = _title;
		 year = _year;
		 type = _type;
		 state = _state;
	}
	int getRegistrationCode(){return registrationCode;};
	string getTitle() { return title; };
	int getYear() { return year; };
	string getType() { return type; };

	void setRegistrationCode(int _registrationCode){ registrationCode = _registrationCode; };
	void setTitle(string _title){ title = _title; };
	void setYear(int _year){ year = _year; };
	void setType(string _type){ type = _type; };

// not sure about these
	bool getState() { return state; };
	void setState(bool _state){state = _state;};

};

