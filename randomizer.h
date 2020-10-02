//randomizer.h
#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include "dish.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

/***************************************************
 * Class: Randomizer
 * Generates a random menu based off of a menu file
 * *************************************************/
class Randomizer
{
    private:
    string fileName;
    int numMeals;
    vector<Dish> entrees;
    vector<Dish> sides;
    vector<Dish> desserts;

    public:
    Randomizer(): fileName(string()), numMeals(0), entrees(vector<Dish>()), sides(vector<Dish>()), desserts(vector<Dish>()) {}
    Randomizer(string fileName, int numMeals): fileName(fileName), numMeals(numMeals) {}
    void generateMenu();
    void randomize();
};

#endif // RANDOMIZER_H