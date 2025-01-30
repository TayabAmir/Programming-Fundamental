#include <iostream>
using namespace std;

int main() {

cout << "Enter the size of the fertilizer bag in pounds: ";
float pound;
cin >> pound;

cout << "Enter the cost of the bag: $";
float bag;
cin >> bag;

cout << "Enter the area in square feet that can be covered by the bag: ";
float area;
cin >> area;

float FPP;
FPP = bag / pound;

float FPSF;
FPSF = bag / area;

cout << "Cost of fertilizer per pound: $" << FPP << endl;
cout << "Cost of fertilizing per square foot: $" << FPSF;

}