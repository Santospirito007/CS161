// chap_3_prb_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

int _tmain(int argc, _TCHAR* argv[])
{
	double val1 = 0;
	double val2 = 0;
	double sum = 0;
	double difference = 0;
	double ration = 0;
	double product = 0;


	cout << "Input value one you want to sort." << endl;
	cin >> val1;
	cout << "Input value two you want to sort." << endl;
	cin >> val2;

	if (val1 > val2){
		cout << "The first value is larger: " << val1 << endl;;
	}
	else{
		cout << "The seccond value is larger: " << val2 << endl;;
	}

	sum = val1 + val2;
	difference = val1 - val2;
	product = val1*val2;
	ration = val1 / val2;

	cout << "Sum: " << sum << endl << "Difference: " << difference << endl << "Product: " << product <<endl<< "Ratio: " << ration << endl;


	return 0;
}

