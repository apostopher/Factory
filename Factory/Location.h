#ifndef __LOCATION_H__
#define __LOCATION_H__

#include "stdafx.h"
#include "CountryMap.h"

class Location{
public:
	inline City getLocation(){
		return current_location;
	};
	int getDistance(const Location &dest);
protected:
	Location(City loc);
	City current_location;
};
#endif