#ifndef EXPEDIAUSER_H
#define EXPEDIAUSER_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "UserType.h"
using namespace std;
class User {
protected:
	string user_name;
	string password;
	string name;
	string email;
	UserType type = UserType::CusomterUser;

public:
	User(const User&) = delete;
	void operator=(const User&) = delete;

	User() ;

	virtual ~User() ;

	string ToString() const ;

	void Read(const string& user_name) ;

	const string& GetEmail() const ;

	void SetEmail(const string& email) ;

	const string& GetName() const ;

	void SetName(const string& name) ;

	const string& GetPassword() const ;

	void SetPassword(const string& password) ;

	const string& GetUserName() const ;

	void SetUserName(const string& userName) ;

	UserType GetType() const ;

	void SetType(UserType type) ;
};




#endif