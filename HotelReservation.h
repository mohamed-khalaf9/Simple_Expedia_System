#ifndef HOTELRESERVATION_H
#define HOTELRESERVATION_H
#include "Reservation.h"
#include "HotelRequest.h"
#include "HotelRoom.h"
#include <iostream>
#include <sstream>
using namespace std;


class HotelReservation : public Reservation {
private:
	HotelRequest request;
	HotelRoom room;

public:
	HotelReservation(const HotelRequest& request, const HotelRoom& room);

	virtual HotelReservation* Clone() const override;

	virtual double TotalCost() const override ;

	virtual string ToString() const override ;

	const HotelRequest& GetRequest() const ;

	const HotelRoom& GetRoom() const;
};








#endif