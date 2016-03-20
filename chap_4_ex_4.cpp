// chap_4_ex_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
	
	char user_input;
	bool test = true;
	double guess = 50;
	int tries = 0;
	double low = 1;
	double high = 100;

	cout << "I am going to try guessing a number you pick between 1 to 100" << endl;
	cout << "Is your number"<< guess<< "('y/n')" << endl;

	cin >> user_input;
	
	if (user_input == 'y'){
		cout << "Yes I win!" << endl;
	}
	else{
		
		while (test){
			cout << "was the number High? (y/n)?" << endl;
			cin >> user_input;

			if (user_input == 'n'){
				low = guess + 1;
				guess = ceil((low + high) / 2);
				++tries;
			}else if (user_input == 'y'){
				high = guess - 1;
				guess = floor((high + low) / 2);
				++tries;
			}

			cout << "Is your number" << guess << "('y/n')" << endl;
			cin >> user_input;

			if (user_input == 'y'){
				cout << "Yes I win!" << endl;
				cout << "tries " << tries << endl;
				test = false;
			}
			else{
				cout <<"tries "<< tries << endl;
			}
		}
	}

	


	return 0;
}

