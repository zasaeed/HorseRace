horserace: horse.o race.o main.o
	g++ horse.o race.o main.o -o horserace
horse.o: horse.cpp horse.h
	g++ -c horse.cpp
race.o: race.cpp race.h horse.h
	g++ -c race.cpp
main.o: main.cpp race.h horse.h
	g++ -c main.cpp
clean:
	rm -f *.o
	rm horserace