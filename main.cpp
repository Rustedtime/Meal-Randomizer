#include <iostream>
#include <string>
#include "randomizer.h"
using std::string;
using std::cout;
using std::cin;

int main()
{
    string fileName;
    int numMeals = 0;

    cout << "Enter the name of the menu file: ";
    cin >> fileName;
    while (numMeals <= 0)
    {
        cout << "How many meals do you want to plan for? ";
        cin >> numMeals;
        if (numMeals <= 0) cout << "Please enter a number greater than 0.\n";
    }
    Randomizer r(fileName, numMeals);
    r.generateMenu();
    r.randomize();

    return 0;
}