#ifndef CUSTOMERMANAGER_H
#define CUSTOMERMANAGER_H

#include "ExpediaBackend.h"
#include "Flight.h"
#include "FlightRequest.h"
#include "HotelRequest.h"
#include "HotelRoom.h"
#include <iostream>
#include "PaymentCard.h"
#include "CustomerUser.h"
#include "Reservation.h"
#include "ReservationSet.h"


using namespace std;

class CustomerManager {
private:
	Customer* customer;
	ExpediaBackend& expedia_manager;

public:
	CustomerManager(User* user, ExpediaBackend& expedia_manager);

	vector<Flight> FindFlights(const FlightRequest& request) const;

	vector<HotelRoom> FindHotels(const HotelRequest& request) const;
	vector<string> GetPaymentChoices() const ;

	bool MakeReservation(const Reservation& reservation, PaymentCard& payment_card);

	vector<string> GetItineraries() const ;

	const Customer* GetCustomer() const;
	void addPaymentCard(const PaymentCard& paymentCard_);
};







































#endif