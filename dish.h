// dish.h
#ifndef DISH_H
#define DISH_H

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

/***********************************************************************
 * Class: Dish
 * Purpose: Encapsulates the notion of a part of a meal to randomized
 * *********************************************************************/
class Dish
{
    private:
    string name;
    vector<string> recipe;

    public:
    Dish(): name(string()), recipe(vector<string>()) {} 
    friend std::ostream& operator<<(std::ostream& out, const Dish &d);
    friend std::istream& operator>>(std::istream& in, Dish &d);
};




#endif // DISH_H