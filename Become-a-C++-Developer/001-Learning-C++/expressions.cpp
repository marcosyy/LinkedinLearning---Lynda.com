/*
expressions.cpp
August 31, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

int main() {

	int length, width, area, perimeter;
	int radius, circleArea, circunference;
	string firstName, lastName, fullName;

	cout<<"Enter the Length and Width of a rectangle: "<<endl;
	cin>>length;
	cin>>width;
	area = length * width;
	perimeter = 2 * length + 2 * width;
	cout<<"Area of Retangle: "<<area<<endl;
	cout<<"Perimeter of Retangle: "<<perimeter<<endl;

	cout<<"Enter the Radius of a Circle: "<<endl;
	cin>>radius;
	circleArea = 3.14 * radius * radius;
	circunference = 2 * 3.14 * radius;
	cout<<"Area of The Circle: "<<area<<endl;
	cout<<"Circurnference of The Circle: "<<circunference<<endl;

	cout<<"Enter the first and the last name: "<<endl;
	cin>>firstName;
	cin>>lastName;
	fullName = firstName + " " + lastName;
	cout<<"The full name is: "<<fullName<<endl;

	return 0;
}