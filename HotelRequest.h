#ifndef HOTELREQUEST_H
#define HOTELREQUEST_H
#include <iostream>
using namespace std;


class HotelRequest {
private:
	string from_date;
	string to_date;
	string country;
	string city;
	int rooms;
	int adults;
	int children;

public:
	int GetTotalNights() const ;
	int GetAdults() const;

	void SetAdults(int adults);

	int GetChildren() const;

	void SetChildren(int children) ;

	const string& GetCity() const ;

	void SetCity(const string& city) ;

	const string& GetCountry() const ;

	void SetCountry(const string& country) ;

	const string& GetFromDate() const ;

	void SetFromDate(const string& fromDate);

	int GetRooms() const ;

	void SetRooms(int rooms) ;

	const string& GetToDate() const ;

	void SetToDate(const string& toDate);
};







#endif