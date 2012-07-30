#include "StdAfx.h"
#include "Item.h"
#include <string>

using namespace std;

Item::Item(string itemName, string desc)
{
	name = itemName;
	description = desc;
};

bool Item::setQuantity(const string qty){
	quantity = qty;
	return true;
};

string Item::getDetails(){
	return "";
};

