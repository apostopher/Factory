#include "StdAfx.h"
#include "Vehicle.h"
#include "Factory.h"
#include <string>

using namespace std;

/* Template implementation */
Factory::Factory(const string name, City location) {
	businessName = name;
	current_location = location;
};

bool Factory::addVehicle(Vehicle * vehicle){
	// Factory has bought a new vehicle. Add it to our records.
	vehicles.push_back(vehicle);
	return true;
};

string Factory::getDetails(){
	/* This function gives complete report of the status of this factory.
	   It lists all the trucks and the goods they are carring.
	*/
	return "";
};