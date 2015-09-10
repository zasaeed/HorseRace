//race.cpp
#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){

	length = 10;

}//end default constructor

Race::Race(int length){

	Race::length = length;

}//end race constructor

void Race::printLane(int horseNum, int x){

	for(int y = 0; y < length; y++){
		if(y == horseNum){
			cout << x + 1;
		}else{
			cout << ".";
		}//end if-else statement
	}//end for loop

	cout << endl;

}//end printLane method

void Race::start(){

	bool winner = false;
	bool keepGoing = true;
	while(keepGoing){

		cout << "Press the enter key to continue" << endl;
		if(cin.get() == '\n' and winner == false){
			keepGoing = true;
		}else{
			keepGoing = false;
		}//end if-else statement

		for(int x = 0; x < 5; x++){
			printLane(h[x].getPosition(), x);
			h[x].advance();

			if(h[x].getPosition() == length){
				cout << "Horse number " << x + 1 << " is the winner" << endl;
				winner = true;
				x = 5;
			}//end printLane call
		}//end for loop

	}//end while loop

}//end start methods

