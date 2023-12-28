#ifndef RESERVATION_H
#define RESERVATION_H
#include <iostream>
using namespace std;

class Reservation {
public:
	virtual Reservation* Clone() const = 0;

	virtual double TotalCost() const = 0;

	virtual string ToString() const = 0;

	virtual ~Reservation() ;
};



















#endif