/*
loan.cpp
September 10, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

int main() {

	int months = 0;
	double balance = 5000;
	double payment = 500;

	while(balance > 0) {
		months++;
		balance -= payment;
	}

	cout<<"It will take you "<<months<<" months to pay off your loan"<<endl;
}