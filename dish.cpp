#include <iostream>
#include "dish.h"

// Insertion operator: prints the name of the recipe, the ingredients, and closes the recipe with a '*'
std::ostream& operator<<(std::ostream& out, const Dish &d)
{
    out << d.name << "\n";
    for (unsigned int i = 0; i < d.recipe.size(); i++)
    {
        out << "\t" << d.recipe[i];
    }

    out << "*\n";

    return out;
}

// Extraction operator: extracts a recipe from the stream into the Dish object
std::istream& operator>>(std::istream& in, Dish &d)
{
    string line;
    getline(in, line); // extract the title of the recipe
    d.name = line;
    while (in.peek() != '*') // extract ingredients until a '*' is encountered
    {
        getline(in, line);
        d.recipe.push_back(line);
    }
    in.ignore(256, '\n');
    return in;
}