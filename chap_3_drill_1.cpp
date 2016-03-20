// chap_3_drill_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"


int _tmain(int argc, _TCHAR* argv[])
{
	string first_name;
	string last_name;
	string friend_name;
	char friend_sex;
	int friend_age = 0;
	cout << "Please enter your first name, then hit enter, followed by your last name!" << endl;
	cin >> first_name;
	cin >> last_name;
	cout << "Hello, " << first_name <<"." << endl;
	cout << "Enter your friends name that you want to write too!" << endl;
	cin >> friend_name;
	cout << "What is your friends sex? (m/f)" << endl;
	cin >> friend_sex;

	cout << "dear " << first_name << "," << endl << "How are you? I am fine. I miss you!" << endl;
	if (friend_sex == 'm'){
		cout << "If you see " << friend_name << "please ask him to call me." << endl;
	}
	else if (friend_sex == 'f'){
		cout << "If you see " << friend_name << "please ask her to call me." << endl;
	}
	else{
		cout << "You did not enter a sex for your friend." << endl << "I will now terminate";
		return 0;
	}
	cout << endl << endl << endl;

	return 0;
}

