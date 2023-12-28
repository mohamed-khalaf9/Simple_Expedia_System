#ifndef CUSTOMERUSER_H
#define CUSTOMERUSER_H
 
#include "expediaUser.h"
#include <sstream>
#include "ReservationSet.h"
#include "PaymentCard.h"
using namespace std;



class Customer : public User {
protected:
	vector<PaymentCard*> cards;	// * to allow polymophism
	ReservationsSet reservations;

public:
	Customer(const Customer&) = delete;
	void operator=(const Customer&) = delete;

	Customer() ;

	~Customer() ;

	void AddPaymentCard(const PaymentCard& card) ;

	void AddReservation(const Reservation& reservation) ;

	const vector<PaymentCard*>& GetCards() const;

	const ReservationsSet& GetReservations() const ;
};








#endif