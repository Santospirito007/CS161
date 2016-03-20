// midTerm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../std_lib_facilities.h"

using namespace std;

void print_rev(vector<int>);
void div_bits(int);
vector<int> get_bits(int);
string codeIt(string);

int main()
{
	cout << "Joe Aguilera" << endl;

	vector<int> test;
	/*int testInts;
	while (cin >> testInts){
		test.push_back(testInts);
	}*/
	string holder;

	div_bits(10);
	cout << endl;

	print_rev(get_bits(10));

	holder = codeIt("Hello World!");
	cout << holder << endl;
	holder = codeIt(holder);
	cout << holder << endl;

	return 0;
}

void print_rev(vector<int> v){
	for (int i = v.size()-1; i>=0; --i){
		cout << v[i];
	}
}

void div_bits(int div){
	int bit;
	while (div > 0){
		bit =div % 2;
		cout << bit;
		div = (div / 2);
	}
}

vector<int> get_bits(int div){
	int bit;
	vector<int> v;
	while (div > 0){
		bit = div % 2;
		v.push_back(bit);
		//cout << bit;
		div = (div / 2);
	}

	return v;
}

string codeIt(string Str){
	string local = " ";
	for (char i : Str){
		if (isupper(i)){
			i = ((i - 'A') + 13)% 26+'A';	
		}
		else if (islower(i)){
			i = ((i - 'a') + 13) % 26 + 'a';
		}
		local = local + i;
	}

	return local;
}