// chap_4_drill_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int _tmain(int argc, _TCHAR* argv[])
{
	double user_input1;
	double user_input2;
	char user_test;
	bool test = true;

	cout << "Input two numbers!" << endl;

	while (cin >> user_input1 >> user_input2 || test){
		cout << "Number 1" << user_input1 << endl << "Number 2: " << user_input2 << endl;
		if (user_input1 > user_input2){
			cout << user_input1 << " is larger, and " << user_input2 << "is the smallest!" << endl;
			if (abs(user_input1 - user_input2)<=0.01){
				cout << "The numbers are almost equal!" << endl;
			}
		}
		else if (user_input1 == user_input2){
			cout << "The numbers are Equal!" << endl;
		}
		else if (user_input1 < user_input2){
			cout << user_input2 << " is larger, and " << user_input1 << " is the smallest!" << endl;
			if (abs(user_input2 - user_input1) <= 0.01){
				cout << "The numbers are almost equal!" << endl;
			}
		}
		cout << "Do you want to go back around the loop?(y/n)" << endl;
		cin >> user_test;
		if (user_test == 'n'){
			test = false;
		}
	}
	return 0;
}

