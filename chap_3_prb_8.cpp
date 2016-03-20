// chap_3_prb_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int user_input;
	int cdbl_calulation{ 0 };

	cout << "Enter a whole Number" << endl;

	cin >> user_input;

    cdbl_calulation = user_input%2;

   // cout << cdbl_calulation << endl;

	if (cdbl_calulation > 0){
		cout << "Number is not even" << endl;
	}
	else{
		cout << "Number is Even" << endl;
	}
	
	return 0;
}

