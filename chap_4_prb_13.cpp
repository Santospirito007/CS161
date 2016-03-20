// chap_4_prb_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const int max_prime = 100;
	const int min_prime = 1;
	int counter = 0;
	vector<double> holder;

	for (int i = min_prime; i < max_prime + 1; i++){
		//cout << i << endl;
		counter = i;
		holder.push_back(counter);
	}
	for (int i = 1; i <= max_prime; i++){

	}

	return 0;
}

