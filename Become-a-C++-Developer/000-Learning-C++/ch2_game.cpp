/*
ch2_game.cpp
September 27, 2018
@MarcosYudiro
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

void setPlayerNames();
string playerNames[2];

int main() {

	bool player1Turn = true,
		 gameOver = false;

	int chipsInPile = 0,
		chipsTaken = 0,
		maxTurn = 0;

	srand(time(0));

	setPlayerNames();

	chipsInPile = (rand() % MAX_CHIPS) + 1;
	cout<<"This round will start with "<<chipsInPile<<" chips in the pile"<<endl;
	maxTurn = MAX_TURN * chipsInPile;
	cout<<"You can take up to "<<maxTurn<<endl;
	chipsTaken = (rand() % maxTurn) + 1;
	cout<<"Number taken: "<<chipsTaken<<endl;

	return 0;

}

void setPlayerNames() {

	for(int i = 0; i < 2; i++) {
		cout<<"Player "<<i + 1<<" , please enter you name: "<<endl;
		cin>>playerNames[i];
		cout<<"Thanks and good luck!\n"<<endl;
	}

}