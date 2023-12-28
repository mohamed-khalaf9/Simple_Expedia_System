#ifndef HOTELROOM_H
#define HOTELROOM_H
#include <iostream>
using namespace std;



class HotelRoom{
private:
	string hotel_name;
	string room_type;
	int available_rooms = 0;
	double price_per_night = 0;
	string date_from;
	string date_to;

public:
	string ToString() const;

	const string& GetDateFrom() const ;

	void SetDateFrom(const string& dateFrom);

	const string& GetDateTo() const;

	void SetDateTo(const string& dateTo) ;


	double GetPricePerNight() const;

	void SetPricePerNight(double pricePerNight) ;

	const string& GetRoomType() const ;

	void SetRoomType(const string& roomType);

	int GetAvailableRooms() const ;

	void SetAvailableRooms(int availableRooms = 0) ;

	const string& GetHotelName() const;

	void SetHotelName(const string& hotelName) ;
};































#endif


