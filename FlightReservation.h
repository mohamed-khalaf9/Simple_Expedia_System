#ifndef FLIGHTRESERVATION_H
#define FLIGHTRESERVATION_H
#include "FlightRequest.h"
#include "Flight.h"
#include "Reservation.h"
#include <iostream>
#include <sstream>
using namespace std;

class FlightReservation : public Reservation {
private:
	FlightRequest request;
	Flight flight;

public:
	FlightReservation(const FlightRequest& request, const Flight& flight) ;

	virtual FlightReservation* Clone() const override;

	virtual double TotalCost() const override ;

	virtual string ToString() const override ;

	const Flight& GetFlight() const ;

	const FlightRequest& GetRequest() const ;

};




























#endif