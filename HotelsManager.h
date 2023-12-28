#ifndef HOTELSMANAGER_H
#define HOTELSMANAGER_H
#include "HotelRequest.h"
#include <vector>
#include "HotelRoom.h"
#include "HotelApis.h"
#include "HotelReservation.h"

class IHotelsManager {
protected:
	HotelRequest request;
public:
	virtual string GetName() const = 0;

	virtual void SetHotelRequest(const HotelRequest& request_);
	virtual vector<HotelRoom> SearchHotelRooms() = 0;

	virtual bool ReserveRoom(const HotelReservation& reservation) const = 0;

	virtual ~IHotelsManager();
};
///////////////////////////////////////////////////////////////////

class MarriottHotelsManager : public IHotelsManager {
private:

public:
	virtual string GetName() const override ;

	virtual vector<HotelRoom> SearchHotelRooms() ;
	virtual bool ReserveRoom(const HotelReservation& reservation) const override ;

};
///////////////////////////////////////////////////////////////////////////////////////
class HiltonHotelsManager : public IHotelsManager {
private:

public:
	virtual string GetName() const override ;

	virtual vector<HotelRoom> SearchHotelRooms() ;
    virtual bool ReserveRoom(const HotelReservation& reservation) const override;

};
//////////////////////////////////////////////////////////////////









#endif