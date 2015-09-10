//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>
using namespace std;

class Horse{

	private:
		int position;
	public:
		Horse();
		void advance();
		int getPosition();

};//close Horse def

#endif