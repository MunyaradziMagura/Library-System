#pragma once
#include "item.h"
class magazine :
	public item
{
private:
	vector<string> editors;

public:
	magazine(int _registrationCode, string _title, int _year, string _type, bool _state, vector<string> _editors) : item(_registrationCode, _title, _year, _type, _state) {
		editors = _editors;
	}
	void setEditors(vector<string> _editors) { editors = _editors; }
	vector<string> getEditors() { return editors; }
};

