#include "HotelRequest.h"





int HotelRequest::GetTotalNights() const {
	// Some date computations
	return 3;
}
int HotelRequest::GetAdults() const {
	return adults;
}

void HotelRequest::SetAdults(int adults) {
	this->adults = adults;
}

int HotelRequest::GetChildren() const {
	return children;
}

void HotelRequest::SetChildren(int children) {
	this->children = children;
}

const string& HotelRequest::GetCity() const {
	return city;
}

void HotelRequest::SetCity(const string& city) {
	this->city = city;
}

const string& HotelRequest::GetCountry() const {
	return country;
}

void HotelRequest::SetCountry(const string& country) {
	this->country = country;
}

const string& HotelRequest::GetFromDate() const {
	return from_date;
}

void HotelRequest::SetFromDate(const string& fromDate) {
	from_date = fromDate;
}

int HotelRequest::GetRooms() const {
	return rooms;
}

void HotelRequest::SetRooms(int rooms) {
	this->rooms = rooms;
}

const string& HotelRequest::GetToDate() const {
	return to_date;
}

void HotelRequest::SetToDate(const string& toDate) {
	to_date = toDate;
}