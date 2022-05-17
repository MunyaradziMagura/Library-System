#pragma once
#include <string>
#include <vector>
#include <xstring>
using namespace std; 
class catelogue

{

private:
	vector<int> itemList;

public:

	catelogue(vector<int> _itemList) {
		itemList = _itemList;
	}
	template<typename T>
	itemList* search(const std::string& name);
	void display();
	void deleteItem(int _item) { itemList.erase(_item);};
	void add(int _item){ itemList.push_back(_item); };
	void update(int _update) { replace(itemList.begin(), itemList.end(), _update) };
};

