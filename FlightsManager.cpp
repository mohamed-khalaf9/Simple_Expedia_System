#include "FlightsManager.h"



 
 void IFlighsManager::SetFlightRequest(const FlightRequest& request_) {
		request = request_;
}
IFlighsManager::~IFlighsManager() {
	}
////////////////////////////////////////////////////////////
 string TurkishFlighsManager::GetName() const  {
	return "Turksih Airlines";
}

 vector<Flight> TurkishFlighsManager::SearchFlights() const {
	TurkishAirlinesOnlineAPI api;

	api.SetFromToInfo(request.GetDatetimeFrom(), request.GetFrom(), request.GetDatetimeTo(), request.GetTo());
	api.SetPassengersInfo(request.GetInfants(), request.GetChildren(), request.GetAdults());

	vector<TurkishFlight> flights_turkey = api.GetAvailableFlights();
	vector<Flight> flights;

	// convert
	for (auto& flight_turkey : flights_turkey) {
		Flight flight;
		flight.SetAirlineName("Turksih Airlines");
		flight.SetDateTimeFrom(flight_turkey.datetime_from);
		flight.SetDateTimeTo(flight_turkey.datetime_to);
		flight.SetTotalCost(flight_turkey.cost);

		flights.push_back(flight);
	}
	return flights;
}
bool TurkishFlighsManager::ReserveFlight(const FlightReservation& reservation) const {
	// Just dummy. We should map from reservation to the agency api
	return TurkishAirlinesOnlineAPI::ReserveFlight(TurkishCustomerInfo(), TurkishFlight());
}
////////////////////////////////////////////////////////////
string AirCanadaFlighsManager::GetName() const  {
		return "AirCanada Airlines";
	}

vector<Flight> AirCanadaFlighsManager::SearchFlights() const  {
		vector<AirCanadaFlight> flights_aircanada = AirCanadaOnlineAPI::GetFlights(request.GetFrom(), request.GetDatePartFrom(), request.GetTo(), request.GetDatePartTo(), request.GetAdults(), request.GetChildren());
		vector<Flight> flights;

		// convert
		for (auto& flight_aircanada : flights_aircanada) {
			Flight flight;
			flight.SetAirlineName(GetName());
			flight.SetDateTimeFrom(flight_aircanada.date_time_from);
			flight.SetDateTimeTo(flight_aircanada.date_time_to);
			flight.SetTotalCost(flight_aircanada.price);

			flights.push_back(flight);
		}
		return flights;
	}

	bool AirCanadaFlighsManager::ReserveFlight(const FlightReservation& reservation) const {
		// Just dummy. We should map from reservation to the agency api
		return AirCanadaOnlineAPI::ReserveFlight(AirCanadaFlight(), AirCanadaCustomerInfo());
	}