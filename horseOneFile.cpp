//horseOneFile.cpp
//Zaid Saeed
//02.13.15

#include <string>
#include <iostream>
using namespace std;

class Horse {

	private:
		int position;

	public:
		Horse(){
			position = 0;
		}//end horse constructor

		void advance(){
			int coin = (rand() % 100);
			if(coin <= 49){
				position = 1 + position;
			}//end if
		}//end advance method

		int getPosition(){
			return position;
		}//end getPosition

};//end horse class def

class Race{

	private:
		Horse h[5];

	public:
		int length;

		Race(){
			length = 10;
		}//end default race constructor

		Race(int length){
			Race::length = length;
		}//end race constructor

		void printLane(int horseNum, int x){
				for(int y = 0; y < length; y++){
					if(y == horseNum){
						cout << x + 1;
					}else{
						cout << ".";
					}//end if else statement
				}//end for loop
				cout << endl;
		}//end printLane

		void start(){

			bool winner = false;
			bool keepGoing = true;
			while(keepGoing){

				cout << "Press the enter key to continue" << endl;
				if(cin.get() == '\n' and winner == false){
					keepGoing = true;
				}else{
					keepGoing = false;
				}//end if else statement

				for(int x = 0; x < 5; x++){
					printLane(h[x].getPosition(), x);
					h[x].advance();

					if(h[x].getPosition() == Race::length){
						cout << "Horse number " << x + 1 << " is the winner" << endl;
						winner = true;
						x = 5;
					}//end if statement
				}//end for loop

			}//end while loop

		}//end start

};//end race class def

int main(){

	srand(time(NULL));
	
	Race race(25);

	race.start();

}//end main