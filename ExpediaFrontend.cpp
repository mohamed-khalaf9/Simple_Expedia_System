#include "ExpediaFrontend.h"

void ExpediaFrontend::LoadDatabase() {
	users_manager->LoadDatabase();
}


ExpediaFrontend::ExpediaFrontend() : users_manager(new UsersManager()), expedia_manager(new ExpediaBackend()) {
	}

ExpediaFrontend::~ExpediaFrontend() {
		cout << "Destructor: ExpediaFrontend\n";

		if (users_manager != nullptr) {
			delete users_manager;
			users_manager = nullptr;
		}
	}

void ExpediaFrontend::Run() {
		LoadDatabase();

		while (true) {
			users_manager->AccessSystem();	// login/signup

			if (users_manager->GetCurrentUser()->GetType() == UserType::CusomterUser) {
				customer_manager = new CustomerManager(users_manager->GetCurrentUser(), *expedia_manager);
				CustomerView view(*customer_manager);
				view.Display();
			}
			else
				assert(false);
		}
	}