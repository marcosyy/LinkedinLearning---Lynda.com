/*
asciitable.cpp
August 26, 2018
@MarcosYudiro
*/

#include <iostream>
using namespace std;

int main() {
	
	char temp;
	for(int n = 0; n <= 128; n++) {
		temp = n;
		cout<<n<<" : "<<temp<<endl;
	}
	return 0;
}