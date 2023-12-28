#ifndef FLIGHTSMANAGER_H
#define FLIGHTSMANAGER_H
#include "FlightRequest.h"
#include "Flight.h"
#include "FlightsApis.h"
#include <vector>
#include "FlightReservation.h"



class IFlighsManager {
protected:
	FlightRequest request;
public:
	virtual void SetFlightRequest(const FlightRequest& request_);
	virtual vector<Flight> SearchFlights() const = 0;

	virtual bool ReserveFlight(const FlightReservation& reservation) const = 0;

	virtual string GetName() const = 0;

	virtual ~IFlighsManager();
};
/////////////////////////////////////////////////////
class TurkishFlighsManager : public IFlighsManager {
private:
public:
	virtual string GetName() const override ;

	virtual vector<Flight> SearchFlights() const override ;
	virtual bool ReserveFlight(const FlightReservation& reservation) const ;
};
////////////////////////////////////////////////////////
class AirCanadaFlighsManager : public IFlighsManager {
public:
	virtual string GetName() const override;

	virtual vector<Flight> SearchFlights() const override ;

	virtual bool ReserveFlight(const FlightReservation& reservation) const ;
};
///////////////////////////////////////////////////////////////////////


























#endif