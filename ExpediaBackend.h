#ifndef EXPEDIABACKEND_H
#define EXPEDIABACKEND_H

#include <iostream>
#include <assert.h>
#include <vector>
#include "FlightsManager.h"
#include "HotelsManager.h"
#include "Ipayment.h"
#include "FlightFactory.h"
#include "HotelFactory.h"
#include "PaymentFactory.h"
#include "PaymentCard.h"
#include "CreditCard.h"
#include "DebitCard.h"
#include "FlightReservation.h"
#include "HotelReservation.h"
#include "ItineraryReservation.h"
using namespace std;

class ExpediaBackend {
private:
	vector<IFlighsManager*> flights_managers;
	IPayment* payment_helper;

	vector<IHotelsManager*> hotels_managers;

public:
	ExpediaBackend(const ExpediaBackend&) = delete;
	void operator=(const ExpediaBackend&) = delete;

	ExpediaBackend() ;
	vector<Flight> FindFlights(const FlightRequest& request) const ;

	vector<HotelRoom> FindHotels(const HotelRequest& request) const ;

	bool ChargeCost(double cost, PaymentCard& payment_card) const ;

	bool UnchargeCost(double cost, PaymentCard& payment_card) const ;

	bool CancelReservation(const Reservation& reservation) ;

	bool ConfirmReservation(const Reservation& reservation) ;
	
};


































#endif



