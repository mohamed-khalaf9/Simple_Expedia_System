#ifndef FLIGHTFACTORY_H
#define FLIGHTFACTORY_H
#include "FlightsManager.h"

#include <vector>
#include <iostream>
using namespace std;

class FlightsFactory {
	
public:
	static vector<IFlighsManager*> GetManagers() ;

	static IFlighsManager* GetManager(string name) ;
};























#endif