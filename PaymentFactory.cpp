#include "PaymentFactory.h"




IPayment* PaymentFactory::GetPaymentHelper() {
		if (true)
			return new SquarePayment();
		else if (true)
			return new PayPalPayment();
		else
			return new StripePayment();
	}
 