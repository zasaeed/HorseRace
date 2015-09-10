//race.h 
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race{

	private:
		Horse h[5];

	public:
		int length;
		Race();
		Race(int length);
		void printLane(int horseNum, int x);
		void start();

};//end race def

#endif