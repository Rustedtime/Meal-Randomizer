#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include "dish.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

class Randomizer
{
    private:
    string fileName;
    int numMeals;
    vector<Dish> entrees;
    vector<Dish> sides;
    vector<Dish> desserts;
    void generateMenu();

    public:
    Randomizer();
    Randomizer(string fileName, int numMeals);
    void initialize();
    void randomize();
    void printShoppingList();
};

#endif // RANDOMIZER_H