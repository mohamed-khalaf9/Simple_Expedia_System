#include "HotelFactory.h"



 vector<IHotelsManager*> HotelsFactory::GetManagers() {
	vector<IHotelsManager*> managers;

	managers.push_back(new HiltonHotelsManager());
	managers.push_back(new MarriottHotelsManager());

	return managers;
}

 IHotelsManager* HotelsFactory::GetManager(string name) {
	for (IHotelsManager* mgr : HotelsFactory::GetManagers()) {
		if (mgr->GetName() == name)
			return mgr;
	}
	return nullptr;
}
