#include "FlightFactory.h"

vector<IFlighsManager*> FlightsFactory::GetManagers() {
	vector<IFlighsManager*> flights_managers;

	flights_managers.push_back(new TurkishFlighsManager());
	flights_managers.push_back(new AirCanadaFlighsManager());

	return flights_managers;
}

IFlighsManager* FlightsFactory::GetManager(string name) {
	for (IFlighsManager* mgr : FlightsFactory::GetManagers()) {
		if (mgr->GetName() == name)
			return mgr;
	}
	return nullptr;
}
