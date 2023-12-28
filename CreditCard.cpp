#include "CreditCard.h"

string CreditCard::ToString() const {
	ostringstream oss;
	oss << "[Credit Card]: " << PaymentCard::ToString();
	return oss.str();
}
PaymentCard* CreditCard::Clone() const {
	return new CreditCard(*this);
}
void CreditCard::ReadCardInfo(string name)
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
	

}