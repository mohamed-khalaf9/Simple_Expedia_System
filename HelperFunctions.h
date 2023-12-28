#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H
#include <vector>
#include <iostream>
using namespace std;



class HelperFunctions{
public:
HelperFunctions();
int ReadInt(int low, int high, bool cancel_choice_allowed = false);
int ShowReadMenu(const vector<string>& choices, string header = "Menu") ;

};



#endif