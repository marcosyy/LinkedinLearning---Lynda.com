/*
hospitalstay.cpp
September 22, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

double calculateCharges(int, double, double, double);
double calculateCharges(double, double);

int main() {

	int days;
	double dailyRate, medCharges, labCharges, totalDue;
	bool inpatient = false;
	char answer;

	cout<<"Is this an inpatient stay (y/n)?"<<endl;
	cin>>answer;

	while(answer != 'y' && answer != 'n') {
		cout<<"Please enter a valid answer - y/n"<<endl;
		cin>>answer;
	}

	if(answer == 'y') {
		inpatient = true;
	}
	else {
		inpatient = false;
	}

	cout<<"Enter the total medication charges: "<<endl;
	cin>>medCharges;

	cout<<"Enter the total lab charges: "<<endl;
	cin>>labCharges;

	if(inpatient == true) {
		cout<<"Please enter days spent in the hospital: "<<endl;
		cin>>days;
		cout<<"Please enter the daily rate: "<<endl;
		cin>>dailyRate;

		totalDue = calculateCharges(days, dailyRate, medCharges, labCharges);
	}
	else {
		totalDue = calculateCharges(medCharges, labCharges);
	}

	cout<<"The total cost is: $"<<totalDue<<endl;

}

double calculateCharges(int d, double r, double m, double l) {
	return d * r + m + l;
}

double calculateCharges(double m, double l) {
	return m + l;
}