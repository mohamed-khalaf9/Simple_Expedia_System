#ifndef PAYMENTCARD_H
#define PAYMENTCARD_H
#include <iostream>
#include <sstream>
using namespace std;


class PaymentCard {
protected:
	string owner_name;
	string card_number;
	string expiry_date;
	int security_code;	// e.g. ccv
	// string type;		// e.g. Visa or MasterCard
public:
    virtual void ReadCardInfo(string name)=0;
	const string& GetCardNumber() const ;

	void SetCardNumber(const string& cardNumber) ;

	const string& GetExpiryDate() const ;

	void SetExpiryDate(const string& expiryDate) ;

	const string& GetOwnerName() const ;

	void SetOwnerName(const string& ownerName) ;
	int GetSecurityCode() const ;

	void SetSecurityCode(int securityCode) ;

	virtual string ToString() const ;

	virtual PaymentCard* Clone() const = 0;

	virtual ~PaymentCard();
};











#endif