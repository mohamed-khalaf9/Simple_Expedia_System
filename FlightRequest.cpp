#include "FlightRequest.h"


string FlightRequest::GetDatePartFrom() const {
	return datetime_from;	
}

string FlightRequest::GetDatePartTo() const {
	return datetime_to;
}

int FlightRequest::GetAdults() const {
	return adults;
}

void FlightRequest::SetAdults(int adults) {
	this->adults = adults;
}

int FlightRequest::GetChildren() const {
	return childern;
}

void FlightRequest::SetChildren(int childern) {
	this->childern = childern;
}

const string& FlightRequest::GetDatetimeFrom() const {
	return datetime_from;
}

void FlightRequest::SetDatetimeFrom(const string& datetimeFrom) {
	datetime_from = datetimeFrom;
}

const string& FlightRequest::GetDatetimeTo() const {
	return datetime_to;
}

void FlightRequest::SetDatetimeTo(const string& datetimeTo) {
	datetime_to = datetimeTo;
}

const string& FlightRequest::GetFrom() const {
	return from;
}

void FlightRequest::SetFrom(const string& from) {
	this->from = from;
}

int FlightRequest::GetInfants() const {
	return infants;
}

void FlightRequest::SetInfants(int infants) {
	this->infants = infants;
}

const string& FlightRequest::GetTo() const {
	return to;
}

void FlightRequest::SetTo(const string& to) {
	this->to = to;
}