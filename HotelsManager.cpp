#include "HotelsManager.h"

void IHotelsManager::SetHotelRequest(const HotelRequest& request_) {
	request = request_;
}
IHotelsManager::~IHotelsManager() {
}
///////////////////////////////////////////////////////////////
string MarriottHotelsManager::GetName() const {
	return "Marriott Hotel";
}

 vector<HotelRoom> MarriottHotelsManager::SearchHotelRooms() {
	//string from_date, string to_date, string country, string city, int needed_rooms, int adults, int children
	vector<MarriottFoundRoom> api_rooms = MarriottHotelAPI::FindRooms(request.GetFromDate(), request.GetToDate(), request.GetCountry(), request.GetCity(), request.GetRooms(), request.GetAdults(), request.GetChildren());
	vector<HotelRoom> rooms;

	for (auto& api_room : api_rooms) {
		HotelRoom room;
		room.SetHotelName("Marriott Hotel");
		room.SetDateFrom(api_room.date_from);
		room.SetDateTo(api_room.date_to);
		room.SetPricePerNight(api_room.price_per_night);
		room.SetAvailableRooms(api_room.available);
		room.SetRoomType(api_room.room_type);

		rooms.push_back(room);
	}
	return rooms;
}
 bool MarriottHotelsManager::ReserveRoom(const HotelReservation& reservation) const {
	return true;
}
//////////////////////////////////////////////////////////////////
 string HiltonHotelsManager::GetName() const {
	return "Hilton Hotel";
}

 vector<HotelRoom> HiltonHotelsManager::SearchHotelRooms() {
	vector<HiltonRoom> api_rooms = HiltonHotelAPI::SearchRooms(request.GetCountry(), request.GetCity(), request.GetFromDate(), request.GetToDate(), request.GetAdults(), request.GetChildren(), request.GetRooms());
	vector<HotelRoom> rooms;

	for (auto& api_room : api_rooms) {
		HotelRoom room;
		room.SetHotelName("Hilton Hotel");
		room.SetDateFrom(api_room.date_from);
		room.SetDateTo(api_room.date_to);
		room.SetPricePerNight(api_room.price_per_night);
		room.SetAvailableRooms(api_room.available);
		room.SetRoomType(api_room.room_type);

		rooms.push_back(room);
	}
	return rooms;
}
bool HiltonHotelsManager::ReserveRoom(const HotelReservation& reservation) const {
	return true;
}
