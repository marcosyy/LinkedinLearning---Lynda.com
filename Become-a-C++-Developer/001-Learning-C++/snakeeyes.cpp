/*
snakeeyes.cpp
September 13, 2018
@MarcosYudiro
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	int count = 0;

	for(int i = 0; i < 100; i++) {
		int die1 = rand()%6 + 1;
		int die2 = rand()%6 + 1;
		cout<<setw(6)<<die1<<setw(6)<<die2;

		if(die1 == 1 && die2 == 1) {
			cout<<" Snake Eyes";
			count++;
		}
		cout<<endl;
	}
	cout<<"There were "<<count<<" snake eyes"<<endl;
	return 0;
}
