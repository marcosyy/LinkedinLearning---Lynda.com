/*
travelcost.cpp
August 26, 2018
@MarcosYudiro
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double mpg,
		   distance,
		   gallons,
		   pricePerGallon,
		   totalCost;

	cout<<"Enter how much miles per gallon: "<<endl;
	cin>>mpg;

	cout<<"Enter the distance in miles: "<<endl;
	cin>>distance;

	cout<<"Enter the cost of one gallon of gas: "<<endl;
	cin>>pricePerGallon;

	gallons = distance/mpg;
	totalCost = gallons * pricePerGallon;

	cout<<"Total expense: $"<<fixed<<setprecision(2)<<totalCost<<endl;

	return 0;

}