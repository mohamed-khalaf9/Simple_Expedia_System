#include "ReservationSet.h"


Reservation* ReservationsSet::Clone() const {
	return new ReservationsSet(*this);
}