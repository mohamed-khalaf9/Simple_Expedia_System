#ifndef IPAYMENT_H
#define IPAYMENT_H
#include <iostream>
#include "PaymentsApis.h"
#include <sstream>
using namespace std;

class IPayment {
public:
	virtual void SetUserInfo(string name, string address) = 0;
	virtual void SetCardInfo(string id, string expiry_date, int ccv) = 0;
	virtual bool MakePayment(double money) = 0;
	virtual ~IPayment();
};
///
class PayPalPayment : public IPayment {
private:
	PayPalOnlinePaymentAPI paypal;
	PayPalCreditCard card;
public:
	virtual void SetUserInfo(string name, string address) ;
	virtual void SetCardInfo(string id, string expiry_date, int ccv) ;
	virtual bool MakePayment(double money) ;
};
//////////////////////////////////////////
class SquarePayment : public IPayment {
private:
	string name;
	string address;
	string id;
	string expiry_date;
	int ccv;

public:
	virtual void SetUserInfo(string name_, string address_) ;
	virtual void SetCardInfo(string id_, string expiry_date_, int ccv_) ;
	virtual bool MakePayment(double money) ;
	
};
///////////////////////////////////////////////////////////
class StripePayment : public IPayment {
private:
	StripeCardInfo card;
	StripeUserInfo user;
public:
	virtual void SetUserInfo(string name, string address);
	virtual void SetCardInfo(string id, string expiry_date, int ccv) ;
	virtual bool MakePayment(double money) ;
};
////////////////////////////////////////////////////

























#endif