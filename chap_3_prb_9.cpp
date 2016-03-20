// chap_3_prb_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	string user_input = " ";
	cout << "Type a number out using words, using lower case letters, and I will make it into a number for you!" << endl;
	cin >> user_input;
	if (user_input == "zero"){
		cout << "0" << endl;
	}
	else if (user_input == "one"){
		cout << "1"<< endl;
	}
	else if(user_input =="two"){
		cout << "2" << endl;
	}
	else if (user_input == "three"){
		cout << "3" << endl;
	}
	else if (user_input == "four"){
		cout << "4" << endl;
	}
	else{
		cout << "sorry I Don't know that number! I am a work in progress" << endl;
	}

	return 0;
}

