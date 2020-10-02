//randomizer.cpp
#include "randomizer.h"
#include <fstream>
#include <iostream>
#include <random>
#include <ctime>

// extract the menu from the provided file
void Randomizer::generateMenu()
{
    std::ifstream fin;
    fin.open(fileName);
    if (fin.is_open())
    {
        // prepare file for extraction
        std::string line;
        Dish menuItem;
        while (line != "*") getline(fin, line);
        // generate entrees
        while (fin.peek() != '/')
        {
            fin >> menuItem;
            entrees.push_back(menuItem);
        }
        while (line != "*") getline(fin, line);
        
        // generate sides
        while (fin.peek() != '/')
        {
            fin >> menuItem;
            sides.push_back(menuItem);
        }
        while (line != "*") getline(fin, line);
        // generate desserts
        while (fin.peek() != '/')
        {
            fin >> menuItem;
            desserts.push_back(menuItem);
        }

        fin.close();
    }
    else std::cout << "Could not open file: " << fileName << std::endl;
}

// randomize the menu and print the results to the file
void Randomizer::randomize()
{
    // create the file name
    std::time_t now = time(0);
    std::string shoppingList = "random_menu_" + now;
    shoppingList += ".txt";
    std::ofstream fout;
    fout.open(shoppingList);
    
    if (fout.is_open())
    {
        for (int i = 0; i < numMeals; i++)
        {
            fout << "Meal " << i + 1 << ":\n"; // Write the meal number
            if (entrees.size())
            {
                std::default_random_engine generator;
                std::uniform_int_distribution<int> distribution(0, entrees.size() - 1);
                fout << entrees[distribution(generator)];
            }
            if (sides.size())
            {
                std::default_random_engine generator;
                std::uniform_int_distribution<int> distribution(0, sides.size() - 1);
                fout << sides[distribution(generator)];
            }
            if (desserts.size())
            {
                std::default_random_engine generator;
                std::uniform_int_distribution<int> distribution(0, desserts.size() - 1);
                fout << desserts[distribution(generator)];
            }
        }
    }
    else std::cout << "Error creating shopping list";
}