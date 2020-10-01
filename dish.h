// dish.h
/***********************************************************************
 * Class: Dish
 * Purpose: Encapsulates the notion of a part of a meal to randomized
 * *********************************************************************/
#ifndef DISH_H
#define DISH_H

#include <ostream>
#include <string>
#include <vector>
using std::vector;
using std::string;

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

std::ostream& operator<<(std::ostream& out, const Dish &d)
{
    //TODO
}

std::istream& operator>>(std::istream& in, Dish &d)
{
    //TODO
}


#endif // DISH_H