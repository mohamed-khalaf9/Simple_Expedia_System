#ifndef DEBITCARD_H
#define DEBITCARD_H
#include "PaymentCard.h"
#include <iostream>
#include <sstream>
using namespace std;

class DebitCard : public PaymentCard {
protected:
	string billing_address;

public:
	const string& GetBillingAddress() const ;

	void SetBillingAddress(const string& billingAddress) ;

	virtual PaymentCard* Clone() const override;

	virtual string ToString() const;
	virtual void ReadCardInfo(string name);
};












#endif