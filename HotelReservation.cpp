#include "HotelReservation.h"

HotelReservation::HotelReservation(const HotelRequest& request, const HotelRoom& room) :
	request(request), room(room) {
}

HotelReservation* HotelReservation::Clone() const {
	return new HotelReservation(*this);
}

double HotelReservation::TotalCost() const  {
	return room.GetPricePerNight() * request.GetTotalNights();
}

string HotelReservation::ToString() const {
	ostringstream oss;
	oss << "Hotel reservation: " << room.GetHotelName() << ": " << request.GetCity() << " @ " << request.GetCountry() << "\n";
	oss << "\t" << request.GetFromDate() << " to " << request.GetToDate() << " : " << request.GetTotalNights() << "\n";
	oss << "\t" << "Adults: " << request.GetAdults() << " children " << request.GetChildren() << "\n";
	oss << "\tTotal Cost:" << TotalCost() << "\n";

	return oss.str();
}

const HotelRequest& HotelReservation::GetRequest() const {
	return request;
}

const HotelRoom& HotelReservation::GetRoom() const {
	return room;
}