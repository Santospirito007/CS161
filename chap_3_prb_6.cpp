// chap_3_prb_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int user_input1 = 0;
	int user_input2 = 0;
	int user_input3 = 0;
	const int x = 2;

	cout << "Enter value one." << endl;
	cin >> user_input1;
	cout << "Enter Value two." << endl;
	cin >> user_input2;
	cout << "Enter Value three." << endl;
	cin >> user_input3;

	if (user_input1 > user_input2){
		if (user_input2 > user_input3){
			cout << "values in Numerical order" << endl;
			cout << user_input3 << ", " << user_input2 << ", " << user_input1 << endl;}
		else if (user_input3 > user_input2){
			cout << "values in Numerical order" << endl;
			cout << user_input2 << ", " << user_input3 << ", " << user_input1 << endl;}
	}else if (user_input2 > user_input3){
		if (user_input3 > user_input1){
			cout << "values in Numerical order" << endl;
			cout << user_input1 << ", " << user_input3 << ", " << user_input2 << endl;
		}else{
			cout << "values in Numerical order" << endl;
			cout << user_input3 << ", " << user_input1 << ", " << user_input2 << endl;}
	}else if (user_input3 > user_input1){
		if (user_input1 > user_input2){
			cout << "values in Numerical order" << endl;
			cout << user_input2 << ", " << user_input1 << ", " << user_input3 << endl;
		}else{
			cout << "values in Numerical order" << endl;
			cout << user_input1 << ", " << user_input2 << ", " << user_input3 << endl;}
	}else if (user_input1 == user_input2 && user_input1 > user_input3){
		cout << "values in Numerical order" << endl;
		cout << user_input3 << ", " << user_input1 << ", " << user_input2 << endl;
	}else if (user_input1 == user_input3 && user_input1 > user_input2){
		cout << "values in Numerical order" << endl;
		cout << user_input2 << ", " << user_input1 << ", " << user_input3 << endl;
	}else if (user_input1 == user_input2 && user_input1 < user_input3){
		cout << "values in Numerical order" << endl;
		cout << user_input2 << ", " << user_input1 << ", " << user_input3 << endl;
	}else if (user_input1 == user_input3 && user_input1 < user_input2){
		cout << "values in Numerical order" << endl;
		cout << user_input3 << ", " << user_input1 << ", " << user_input2 << endl;
	}else if (user_input2 == user_input3 && user_input2 > user_input1){
		cout << "values in Numerical order" << endl;
		cout << user_input1 << ", " << user_input2 << ", " << user_input3 << endl;
	}else if (user_input2 == user_input3 && user_input2 < user_input1){
		cout << "values in Numerical order" << endl;
		cout << user_input3 << ", " << user_input2 << ", " << user_input1 << endl;
	}
	
	return 0;
}

