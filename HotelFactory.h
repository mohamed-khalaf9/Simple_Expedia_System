#ifndef HOTELFACTORY_H
#define HOTELFACTORY_H
#include <vector>
#include "HotelsManager.h"
using namespace std;

class HotelsFactory {
public:
	static vector<IHotelsManager*> GetManagers();

	static IHotelsManager* GetManager(string name);
};



















#endif