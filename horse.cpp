//horse.cpp
#include <string>
#include <iostream>
#include "horse.h"

using namespace std;

Horse::Horse(){

	position = 0;

}//end constructor

void Horse::advance(){

	int coin = (rand() % 100);
	if(coin <= 49){
		position = 1 + position;
	}//end if

}//end advance method

int Horse::getPosition(){

	return position;

}//end getPosition method