#ifndef __ITEM_H__
#define __ITEM_H__

#include <string>

using namespace std;

class Item
{
	string name;
	string quantity;
	string description;
	time_t expiry;

public:
	Item(string itemName, string desc);
	
	inline string getName(){
		return name;
	};
	inline string getDesc(){
		return description;
	};
	inline string getQuantity(){
		return description;
	};
	bool setQuantity(const string qty);
	string getDetails();
};

#endif
