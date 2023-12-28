#include "FlightReservation.h"



FlightReservation::FlightReservation(const FlightRequest& request, const Flight& flight) :
	request(request), flight(flight) {
}

FlightReservation* FlightReservation::Clone() const {
	return new FlightReservation(*this);
}

double FlightReservation::TotalCost() const  {
	return flight.GetTotalCost();
}

string FlightReservation::ToString() const {
	ostringstream oss;
	oss << "Airline reservation with reservation: " << flight.GetAirlineName() << ": From " << request.GetFrom() << " on " << request.GetDatetimeFrom() << "\n";
	oss << "\tTo " << request.GetTo() << " on " << request.GetDatetimeTo() << "\n";
	oss << "\t" << "Adults: " << request.GetAdults() << " children: " << request.GetChildren() << " infants: " << request.GetInfants() << "\n";
	oss << "\tTotal Cost:" << TotalCost() << "\n";

	return oss.str();
}

const Flight& FlightReservation::GetFlight() const {
	return flight;
}

const FlightRequest& FlightReservation::GetRequest() const {
	return request;
}