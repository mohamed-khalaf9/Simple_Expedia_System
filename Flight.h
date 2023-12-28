#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <sstream>
using namespace std;




class Flight {
private:
	string airline_name;
	double total_cost = 0;
	string date_time_from;
	string date_time_to;

public:
	string ToString() const ;

	const string& GetDateTimeFrom() const ;

	void SetDateTimeFrom(const string& dateTimeFro);

	const string& GetDateTimeTo() const ;

	void SetDateTimeTo(const string& dateTimeT);

	double GetTotalCost() const;

	void SetTotalCost(double totalCost) ;

	const string& GetAirlineName() const;

	void SetAirlineName(const string& airlineName) ;
};



















#endif