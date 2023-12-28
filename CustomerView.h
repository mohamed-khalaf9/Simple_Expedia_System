#ifndef CUSTOMERVIEW_H
#define CUSTOMERVIEW_H
#include "FlightRequest.h"
#include "HotelRequest.h"
#include "Flight.h"
#include "FlightRequest.h"
#include "HotelRoom.h"
#include "PaymentCard.h"
#include "CustomerManager.h"
#include <iostream>
#include <vector>
#include "HelperFunctions.h"
#include "FlightReservation.h"
#include "ItineraryReservation.h"
#include "HotelReservation.h"
#include "CustomerUser.h"
#include "CreditCard.h"
#include "DebitCard.h"
using namespace std;

class CustomerView {
private:
	CustomerManager& customer_manager;
	const Customer& customer;
	ItineraryReservation current_itinerary;

	void ReadFlightRequest(FlightRequest& request) const;

	void ReadHotelRequest(HotelRequest& request) const ;
	int ChooseFlight(const vector<Flight>& flights) const ;

	int ChooseRoom(const vector<HotelRoom>& rooms) const ;

	void AddFlight() ;

	void AddHotel() ;

	void PayItinerary() ;

public:
	CustomerView(CustomerManager& customer_manager);

	void Display() ;

	void ViewProfile() const ;

	void MakeItinerary() ;
	void ListItineraries() const ;
	void AddPaymentCard(int choice);
};























#endif