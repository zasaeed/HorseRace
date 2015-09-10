#include <iostream>
#include "horse.h"
#include "race.h"

using namespace std;

int main(){

	srand(time(NULL));

	Race race(25);
	race.start();

}