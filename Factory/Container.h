#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "stdafx.h"
#include <vector>
#include <string>
#include <time.h>

using namespace std;

#include "Item.h"
/* Container Class Defination:
   Private:
     items  - List of items this container has.
*/

/* Class signature */
class Container{
	vector<Item *> items;
public:
	inline bool setItem(Item * item){
	  items.push_back(item);
	  return true;
    };
	inline Item * getItem (int position){
	  return items[position];
    };
	inline vector<Item *> getItems(){
	  return items;
    };
	string getDetails();
}; // Class signature

#endif