#include <iostream>
#include <cmath>
using namespace std;
int main() {

// Scientists have discovered that in four decades, the world will EXPLODE! It
// will also take three decades to make a spaceship to travel to a new planet that can hold the
// entire world population.
// You must calculate the number of people there will be in three decades from now.
// Make a variable population and take input from the user that is the world population now.
// Assume that every month, someone gives birth to n more people. Also take n from the user as
// input. Calculate the number of people there will be when the spaceship is created.

int population, n;
cout << "Enter the current world population: ";
cin >> population;
cout << "Enter the monthly birth rate (number of births per month): ";
cin >> n;
int people = population + (n*12*30);
cout << "The population in three decades will be: " << people ;


    }