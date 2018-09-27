/*
ch1_hello_world.cpp
September 26, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

int main() {

	string favFood,
		   name;

	cout<<"Whats your name? "<<endl;
	cin>>name;

	cout<<"Whats your favorite food? "<<endl;
	cin>>favFood;

	cout<<"Hello, "<<name<<endl;
	cout<<"Your favorite food is "<<favFood<<endl;

	return 0;

}