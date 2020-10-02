CXX = g++
CXXFLAGS = -Wall -g


Randomizer: main.o randomizer.o dish.o
	$(CXX) $(CXXFLAGS) -o Randomizer main.o randomizer.o dish.o

main.o: main.cpp

randomizer.o: randomizer.cpp

dish.o: dish.cpp