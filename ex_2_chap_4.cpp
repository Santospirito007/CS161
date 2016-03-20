// ex_2_chap_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long double user_input = 0;
	bool test = false;

	cout << "to end program hit anything not a number." << endl;
	vector<long double> temps = {};
	cout << "keep entering numbmers see above to exit!" << endl;
	cin >> user_input;
	
	while (cin >> user_input){
			temps.push_back((long double)user_input);
			cin >> user_input;
	}

	if (temps.size() == 0){
		//temps.clear();
		temps.push_back(4.0);
		temps.push_back(5.0);
		//cout << temps.size();
		cout << "You didn't enter any numbers. The median of 4 and 5 = " << (temps[5]+ temps[4]) / temps.size() << '\n';
	}else {
		long double sum = 0;
		for (long double x : temps)
			sum += x;
		cout << "Average temperature: " << sum / temps.size() << '\n';
	}

	return 0;
}

