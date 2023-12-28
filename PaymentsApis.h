#ifndef PAYMENTAPIS_H
#define PAYMENTAPIS_H
#include <iostream>
#include "json.h"
#include <string>
using namespace std;
using namespace json;


class PayPalCreditCard {
public:
	string name;
	string address;
	string id;
	string expiry_date;
	int ccv;
};
class PayPalOnlinePaymentAPI {
public:
	void SetCardInfo(const PayPalCreditCard* const card) {
	}
	bool MakePayment(double money) {
		return true;
	}
};
class SquarePaymentAPI {
public:
	static bool WithDrawMoney(string JsonQuery_) {
	//cout << JsonQuery << "\n";
	json::JSON Obj= JSON::Load(JsonQuery_);
	return true;
}

};
class StripeCardInfo {
public:
	string id;
	string expiry_date;
};
class StripeUserInfo {
public:
	string name;
	string address;
};
class StripePaymentAPI {
public:
	bool static WithDrawMoney(StripeUserInfo user, StripeCardInfo card, double money) {
		return true;
	}
};






















#endif