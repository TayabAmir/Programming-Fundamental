#include <iostream>
using namespace std;

int main() {

cout << "Enter the number of sides of the polygon: ";
int side;
cin >> side;

int angle;
angle = (side - 2) * 180;

cout << "The sum of internal angles of a " << side << "-sided polygon is: " << angle << " degrees";
}
