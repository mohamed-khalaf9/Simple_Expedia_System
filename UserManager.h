#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <iostream>
#include <map>
#include "expediaUser.h"
#include "UserManager.h"
#include "AdminUser.h"
#include "CustomerUser.h"
#include "DebitCard.h"
#include "CreditCard.h"
#include "HelperFunctions.h"
using namespace std;

class UsersManager {
protected:
	User* current_user = nullptr;
	map<string, User*> userame_userobject_map;

	void FreeLoadedData() ;

public:

	UsersManager() ;

	~UsersManager();

	UsersManager(const UsersManager&) = delete;
	void operator=(const UsersManager&) = delete;

	void LoadDatabase();

	void AccessSystem() ;
	void DoLogin() ;

	void DoSignUp() ;

	User* GetCurrentUser() const ;
};

















#endif