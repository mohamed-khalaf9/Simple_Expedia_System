#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "PaymentCard.h"
#include <iostream>
#include <sstream>
using namespace std;


class CreditCard : public PaymentCard {
protected:
public:
	virtual string ToString() const override ;
	virtual PaymentCard* Clone() const override;
	virtual void ReadCardInfo(string name);
};






















#endif