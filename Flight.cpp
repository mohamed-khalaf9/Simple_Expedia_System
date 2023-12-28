#include "Flight.h"





string Flight::ToString() const {
	ostringstream oss;
	oss << "Airline: " << airline_name << " Cost: " << total_cost << " Departure Date " << date_time_from << " Arrival date " << date_time_to;
	return oss.str();
}

const string& Flight::GetDateTimeFrom() const {
	return date_time_from;
}

void Flight::SetDateTimeFrom(const string& dateTimeFrom) {
	date_time_from = dateTimeFrom;
}

const string& Flight::GetDateTimeTo() const {
	return date_time_to;
}

void Flight::SetDateTimeTo(const string& dateTimeTo) {
	date_time_to = dateTimeTo;
}

double Flight::GetTotalCost() const {
	return total_cost;
}

void Flight::SetTotalCost(double totalCost) {
	total_cost = totalCost;
}

const string& Flight::GetAirlineName() const {
	return airline_name;
}

void Flight::SetAirlineName(const string& airlineName) {
	airline_name = airlineName;
}