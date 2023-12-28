#include "HelperFunctions.h"

HelperFunctions::HelperFunctions(){

}
int HelperFunctions::ReadInt(int low, int high, bool cancel_choice_allowed ) {	
	if (!cancel_choice_allowed)
		cout << "\nEnter number in range " << low << " - " << high << ": ";
	else
		cout << "\nEnter -1 to cancel or number in range " << low << " - " << high << ": ";

	int value;

	cin >> value;

	if (cancel_choice_allowed && value == -1)
		return value;

	if (low <= value && value <= high)
		return value;

	cout << "ERROR: invalid number...Try again\n";
	return ReadInt(low, high);
}

int HelperFunctions::ShowReadMenu(const vector<string>& choices, string header ) {	
	cout << "\n" << header << ":\n";
	for (int ch = 0; ch < (int)choices.size(); ++ch) {
		cout << "\t" << ch + 1 << ": " << choices[ch] << "\n";
	}
	return ReadInt(1, choices.size());
}
