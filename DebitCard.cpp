#include "DebitCard.h"



const string& DebitCard::GetBillingAddress() const {
	return billing_address;
}

void DebitCard::SetBillingAddress(const string& billingAddress) {
	billing_address = billingAddress;
}

PaymentCard* DebitCard::Clone() const  {
	return new DebitCard(*this);
}

string DebitCard::ToString() const {
	ostringstream oss;
	oss << "[Debit Card]: " << PaymentCard::ToString() << " Billing Address: " << billing_address;
	return oss.str();
}
void DebitCard::ReadCardInfo(string name)
{
	string str;
	SetOwnerName(name);
	cout<<"Card-number : ";
	cin>>str;
	cout<<endl;
	SetCardNumber(str);
	cout<<"Expiry-date : ";
	cin>>str;
	SetExpiryDate(str);
	cout<<endl;
	cout<<"Security-code : ";
	int securityCode;
	cin>>securityCode;
	SetSecurityCode(securityCode);
	cout<<"Billing Addresse";
	cin>>billing_address;
	SetBillingAddress(billing_address);


}