#ifndef PAYMENTFACTORY_H
#define PAYMENTFACTORY_H
#include "Ipayment.h"
#include "PaymentsApis.h"
class PaymentFactory {
public:
	static IPayment* GetPaymentHelper() ;
};




#endif