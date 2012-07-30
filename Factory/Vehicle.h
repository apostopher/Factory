#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include "stdafx.h"
#include <string>

using namespace std;

/* Vehicle Class Defination:
*/

class Vehicle{
protected:
	string makenModel;
	string number;
	float avgSpeed;
public:
	Vehicle(const string in_makenModel, const string in_number, const float in_avgSpeed){
		makenModel = in_makenModel;
		number     = in_number;
		avgSpeed   = in_avgSpeed;
	};
	
	/* Getters */
	inline string getMakenModel(){
		return makenModel;
	};

	inline string getNumber(){
		return number;
	};

	inline float getAvgSpeed(){
		return avgSpeed;
	};
	virtual string getStatus() = 0;
};

#endif