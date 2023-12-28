#ifndef RESERVATIONSET_H
#define RESERVATIONSET_H
#include "ItineraryReservation.h"

class ReservationsSet: public ItineraryReservation {
public:
	
	using ItineraryReservation::ItineraryReservation;

	virtual Reservation* Clone() const;
};




































#endif