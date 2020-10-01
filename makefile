CXX = g++
CXXFLAGS = -Wall -g

randomizer: main.o randomizer.o dish.o
	$(CXX) $(CXXFLAGS) -o randomizer main.o randomizer.o dish.o

main.o: main.cpp randomizer.h

randomizer.o: randomizer.h dish.h

dish.o: dish.h
