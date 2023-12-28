#ifndef FLIGHTREQUEST_H
#define FLIGHTREQUEST_H
#include <iostream>
using namespace std;


class FlightRequest {
private:
	string datetime_from;
	string from;
	string datetime_to;
	string to;
	int infants;
	int childern;
	int adults;

public:
	string GetDatePartFrom() const ;

	string GetDatePartTo() const ;

	int GetAdults() const;

	void SetAdults(int adults) ;

	int GetChildren() const ;
	void SetChildren(int childern) ;

	const string& GetDatetimeFrom() const ;

	void SetDatetimeFrom(const string& datetimeFrom);

	const string& GetDatetimeTo() const ;

	void SetDatetimeTo(const string& datetimeTo) ;

	const string& GetFrom() const;

	void SetFrom(const string& from);

	int GetInfants() const ;

	void SetInfants(int infants);

	const string& GetTo() const ;

	void SetTo(const string& to);
};

































#endif