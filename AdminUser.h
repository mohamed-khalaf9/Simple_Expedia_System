#ifndef ADMINUSER_H
#define ADMINUSER_H
#include "expediaUser.h"
#include "UserType.h"
class Admin : public User {
protected:
public:
	Admin(const Admin&) = delete;
	void operator=(const Admin&) = delete;
	Admin(){
        SetType(UserType::AdminUser);
    }
};



#endif