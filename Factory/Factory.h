#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "stdafx.h"
#include "Vehicle.h"
#include "Location.h"
#include "CountryMap.h"
#include <vector>
#include <string>

using namespace std;

/* Factory Class Defination:
   Private:
     vehicles -     The vector of vehicles that a factory owns
	 businessName - Name of the factory
*/
class Factory : public Location{
public:
	Factory(const string name, City location);
	bool addVehicle(Vehicle * vehicle);
	inline Vehicle * getVehicle (const int vehicle_number){
	  // Give the vehicle of number 'vehicle_number' to the requester.
	  return vehicles[vehicle_number];
    };
	inline string getCompanyName(){
	  // The business name once set during initialization can't be changed.
	  // Give the name of this business to requester.
	  return businessName;
    };
	string getDetails();
protected:
	static map<string, Vehicle *> vehicles;
private:
	string businessName;
};

#endif