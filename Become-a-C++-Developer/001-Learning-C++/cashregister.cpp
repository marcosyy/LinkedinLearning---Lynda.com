/*
cashregister.cpp
September 22, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

void findCoins(int &coins, int &quarters, int &dimes, int &nickels, int &pennies);
void printChange(int &dol, int &q, int &d, int &n, int &p);

int main() {

	int item,
		dollars = 0, 
		quarters = 0,
		dimes = 0,
		nickels = 0,
		pennies = 0,
		coins = 0;
	double price,
		   payment,
		   change,
		   totalDue;
	char answer = 'y';

	while(answer == 'y') {

		cout<<"How many itens did you buy? "<<endl;
		cin>>item;

		cout<<"Enter the price for the itens: "<<endl;
		cin>>price;

		totalDue = item * price;

		cout<<"Enter the amount of payment: "<<endl;
		cin>>payment;

		change = payment - totalDue;
		dollars = change;
		change = change * 100;
		coins = change - dollars * 100;

		findCoins(coins, quarters, dimes, nickels, pennies);
		printChange(dollars, quarters, dimes, nickels, pennies);

		cout<<"Do you wanna do another transaction (y/n)? "<<endl;
		cin>>answer;

	}

	return 0;

}

void printChange(int &dol, int &q, int &d, int &n, int &p) {

	cout<<"dollars: "<<dol<<endl;
	cout<<"quarters: "<<q<<endl;
	cout<<"dimes: "<<d<<endl;
	cout<<"nickels: "<<n<<endl;
	cout<<"pennies: "<<p<<endl;

}

void findCoins(int &coins, int &quarters, int &dimes, int &nickels, int &pennies) {

	quarters = coins / 25;
	dimes = coins % 25 / 10;
	nickels = coins % 25 % 10 / 5;
	pennies = coins % 25 % 10 % 5;

}