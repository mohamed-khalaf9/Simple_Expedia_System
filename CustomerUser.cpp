#include "CustomerUser.h"


Customer::Customer() {
	SetType(UserType::CusomterUser);
}

Customer::~Customer() {
	for (PaymentCard* card : cards)
		delete card;
	cards.clear();
}

void Customer::AddPaymentCard(const PaymentCard& card) {
	cards.push_back(card.Clone());
}

void Customer::AddReservation(const Reservation& reservation) {
	reservations.AddReservation(*reservation.Clone());
}

const vector<PaymentCard*>& Customer::GetCards() const {
	return cards;
}

const ReservationsSet& Customer::GetReservations() const {
	return reservations;
}