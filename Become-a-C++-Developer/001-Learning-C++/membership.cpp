/*
membership.cpp
September 10, 2018
@MarcosYudiro
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int menuChoice;
	int months;
	double totalCharges;

	const double ADULT = 40.00;
	const double CHILD = 30.00;
	const double FAMILY = 100.00;

	cout<<fixed<<setprecision(2)<<showpoint;

	do {

		cout<<"Please choose the type of membership"<<endl;
		cout<<"1 - Adult Membership ($ 40.00 per month)"<<endl;
		cout<<"2 - Child Membership ($ 30.00 per month)"<<endl;
		cout<<"3 - Family Membership ($ 100.00 per month)"<<endl;
		cout<<"4 - Exit"<<endl;
		cin>>menuChoice;

		while(menuChoice < 1 || menuChoice > 4) {
			cout<<"Please enter a valid choice"<<endl;
			cin>>menuChoice;
		}

		if(menuChoice == 4) {
			break;
		}

		cout<<"Enter the number of months"<<endl;
		cin>>months;

		while(months < 1 || months > 24) {
			cout<<"Membership must be between 1 and 24 months, please enter a valid number"<<endl;
			cin>>months;
		}

		switch(menuChoice) {

			case 1:
				totalCharges = months * ADULT;
				break;

			case 2:
				totalCharges = months * CHILD;
				break;

			case 3:
				totalCharges = months * FAMILY;
				break;

			default:
				break;

		}

		cout<<"Based on your choice, your total charges will be $ "<<totalCharges<<endl;

	}while(menuChoice != 4);

	cout<<"Thanks for choosing our gym!!!"<<endl;

	return 0;
}