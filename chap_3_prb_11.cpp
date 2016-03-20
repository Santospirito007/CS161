// chap_3_prb_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//varribles
	double user_input = 0 ;
	double pennies = 0;
	double nickles = 0;
	double dimes = 0;
	double quaters = 0;
	double half_dollas = 0;
	double cent_sum = 0;
	double dollar_ammount = 0;
	double centleft_amount = 0;
	//inputs

	cout << "How many pennies do you have?" << endl;
	cin >> user_input;
	pennies = user_input;
	cout << "How many nickles do you have?" << endl;
	cin >> user_input;
	nickles = user_input;
	cout << "How many dimes do you have?" << endl;
	cin >> user_input;
	dimes = user_input;
	cout << "How many quaters do you have?" << endl;
	cin >> user_input;
	quaters = user_input;
	cout << "How many half dollars do you have?" << endl;
	cin >> user_input;
	half_dollas = user_input;
	//out puts and calcualtions
	if (pennies == 1){
		cout << "You have " << pennies << " penny." << endl;
	}
	else{
		cout << "You have " << pennies << " pennies." << endl;
	}
	cout << "You have " << pennies << " pennie(s)." << endl;
	cout << "You have " << nickles << " nickle(s)." << endl;
	cout << "You have " << dimes << " dime(s)." << endl;
	cout << "You have " << quaters << " quater(s)." << endl;
	cout << "You have " << half_dollas << " half doller(s)." << endl;
	pennies = pennies * 1;
	nickles = nickles * 5;
	dimes = dimes * 10;
	quaters = quaters * 25;
	half_dollas = half_dollas * 50;
	cent_sum = pennies + nickles + dimes + quaters + half_dollas;
	dollar_ammount = floor(cent_sum / 100);
	centleft_amount = ((cent_sum / 100) - dollar_ammount)*100;
	cout << "Therefore you have " << cent_sum << " cents." << endl;
	cout<<"Therefore you have " << dollar_ammount << " dollars"<< " and "<< centleft_amount<< " cents." << endl;

	return 0;
}

