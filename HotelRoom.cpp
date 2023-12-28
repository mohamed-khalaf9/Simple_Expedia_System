#include "HotelRoom.h"
#include <sstream>

string HotelRoom::ToString() const {
	ostringstream oss;
	oss << "Hotel: " << hotel_name << " Room Type: " << room_type << "(" << available_rooms << ") Price per night: " << price_per_night << " From Date " << date_from << " to " << date_to << "";
	return oss.str();
}

const string& HotelRoom::GetDateFrom() const {
	return date_from;
}

void HotelRoom::SetDateFrom(const string& dateFrom) {
	date_from = dateFrom;
}

const string& HotelRoom::GetDateTo() const {
	return date_to;
}

void HotelRoom::SetDateTo(const string& dateTo) {
	date_to = dateTo;
}

double HotelRoom::GetPricePerNight() const {
	return price_per_night;
}

void HotelRoom::SetPricePerNight(double pricePerNight) {
	price_per_night = pricePerNight;
}

const string& HotelRoom::GetRoomType() const {
	return room_type;
}

void HotelRoom::SetRoomType(const string& roomType) {
	room_type = roomType;
}

int HotelRoom::GetAvailableRooms() const {
	return available_rooms;
}

void HotelRoom::SetAvailableRooms(int availableRooms ) {
	available_rooms = availableRooms;
}

const string& HotelRoom::GetHotelName() const {
	return hotel_name;
}

void HotelRoom::SetHotelName(const string& hotelName) {
	hotel_name = hotelName;
}