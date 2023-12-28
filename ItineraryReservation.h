#ifndef ITINERARYRESERVATION_H
#define ITINERARYRESERVATION_H
#include "Reservation.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std; 




class ItineraryReservation: public Reservation {
protected:
	vector<Reservation*> reservations;	

public:
	ItineraryReservation() ;

	ItineraryReservation(const ItineraryReservation& another_reservation);
	void AddReservation(const Reservation& reservation);

	virtual double TotalCost() const ;

	~ItineraryReservation() ;

	const vector<Reservation*>& GetReservations() const ;

	void Clear() ;

	virtual string ToString() const override;

	virtual Reservation* Clone() const override;
};

































#endif