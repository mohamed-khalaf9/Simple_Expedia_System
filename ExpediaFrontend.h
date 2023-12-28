#ifndef EXPEDIAFRONTEND_H
#define EXPEDIAFRONTEND_H
#include "UserManager.h"
#include "ExpediaBackend.h"
#include "CustomerView.h"
#include "CustomerManager.h"

class ExpediaFrontend {
private:
	UsersManager* users_manager;
	ExpediaBackend* expedia_manager;
	CustomerManager* customer_manager = nullptr;

	void LoadDatabase() ;

public:
	ExpediaFrontend(const ExpediaFrontend&) = delete;
	void operator=(const ExpediaFrontend&) = delete;

	ExpediaFrontend();

    ~ExpediaFrontend() ;

	void Run() ;
};










#endif