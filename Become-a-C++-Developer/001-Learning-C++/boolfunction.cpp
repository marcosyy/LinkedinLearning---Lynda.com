/*
boolfunction.cpp
September 22, 2018
@MarcosYudiro
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int number;
bool guess(int);

int main() {

	int usernum;

	srand(time(0));
	number = rand() % 50 + 1;

	cout<<"Please, try to guess a number between 1 and 50"<<endl;
	cin>>usernum;

	while(guess(usernum) != true) {
		cout<<"You failed, try again!!!"<<endl;
		cin>>usernum;
	}

	cout<<"Yeah, you guessed it!!!"<<endl;
	return 0;

}

bool guess(int num) {

	if(num == number) {
		return true;
	}

	if(num < number) {
		cout<<"Too low"<<endl;
	}
	else {
		cout<<"Too high"<<endl;
	}

	return false;

}