CXX = g++
CXXFLAGS = -Wall -g -std=c++11


Randomizer: main.o randomizer.o dish.o
	$(CXX) $(CXXFLAGS) -o Randomizer main.o randomizer.o dish.o
	rm *.o

main.o: main.cpp randomizer.o

randomizer.o: randomizer.cpp dish.o

dish.o: dish.cpp