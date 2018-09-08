/*
shipping.cpp
September 06, 2018
@MarcosYudiro
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double orderPrice,
		   shippingCost;

	cout<<"Enter the total order price: "<<endl;
	cin>>orderPrice;

	if(orderPrice > 75.00)
		shippingCost = 0.00;
	else if(orderPrice > 50.00)
		shippingCost = 5.00;
	else if(orderPrice > 25.00)
		shippingCost = 10.00;
	else if(orderPrice > 0)
		shippingCost = 15.00;

	cout<<"Total price including shipping is: $ "<<fixed<<setprecision(2)<<orderPrice + shippingCost<<endl;

	return 0;

}