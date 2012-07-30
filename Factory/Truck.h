#ifndef __TRUCK_H__
#define __TRUCK_H__

#include "stdafx.h"
#include <vector>
#include <string>
#include <time.h>

#include "Vehicle.h"

using namespace std;

/* Truck Class Defination:
   Private:
     load  - Every truck carries 1 load
	 start - Start of th journey ( start must be within the 'country'. As the truch does not have international permit )
*/
template <typename T>
class Truck : public Vehicle{
	T load;
	string start;
	string dest;
	time_t start_time;
public:
	Truck(const string in_makenModel, const string in_number, const float in_avgSpeed) : Vehicle(in_makenModel, in_number, in_avgSpeed){
		start_time = NULL;
	};
	bool setJourney(string from, string to);
	bool setLoad (T loadToCarry);
	inline T getLoad(){
		return load;
	};
	inline string getStart();
	inline string getEnd();
	string getStatus();
	inline void startJourney();
};

/* Template implementation */
template <typename T>
bool Truck<T>::setJourney(string from, string to){
	start = from;
	dest = to;
	return true;
};

template <typename T>
bool Truck<T>::setLoad (T loadToCarry){
	load = loadToCarry;
	return true;
};

template <typename T>
inline string Truck<T>::getStart(){
	return start;
};

template <typename T>
inline string Truck<T>::getEnd(){
	return dest;
};

template <typename T>
string Truck<T>::getStatus(){
	return "I am Truck";
};

template <typename T>
inline void Truck<T>::startJourney(){
	start_time = time();
};

#endif