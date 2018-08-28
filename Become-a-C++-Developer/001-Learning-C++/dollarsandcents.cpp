/*
dollarsandcents.cpp
August 26, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

int main() {

	int dollars,
		cents;
	double price;
	char dollarSign = 36; //implicit conversion

	cout<<"Enter price in Dollars and Cents: "<<endl;
	cin >> price;

	dollars = price;
	cents = price * 100 - dollars * 100;

	cout<<"Total Dollars: "<<dollarSign<< dollars <<" Cents: "<<cents<<endl;

	return 0;
}