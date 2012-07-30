#include "stdafx.h"
#include <iostream>
#include <string>

#include "Item.h"
#include "Container.h"
#include "Truck.h"
#include "Factory.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Item barrel("Oil Barrel", "");

	Container mid_container;
	mid_container.setItem(&barrel);
	
	Truck<Container> myTruck("TATA", "MH-04 A 6898", 50);
	myTruck.setLoad(mid_container);
	
	Factory myFactory("Rahul Pvt Ltd.", Mumbai);
    myFactory.addVehicle(&myTruck);
	
	Vehicle * vehicle0 = myFactory.getVehicle(0);

	Truck<Container> * truck1 = (Truck<Container> *) vehicle0;
	cout << myFactory.getCompanyName() << myFactory.getVehicle(0)->getNumber() << truck1->getLoad().getItem(0)->getName() << endl;
	cin.get();
	return 0;
}