#include <iostream>
using namespace std;

int main(){

int sqMeter, width, height, result;

cout << "Number of square meters you can paint: ";
cin >> sqMeter;

cout << "Width of the single wall (in meters): ";
cin >> width;

cout << "Height of the single wall (in meters): ";
cin >> height;

result = sqMeter / (width * height);

cout << "Number of walls you can paint: " << result;


}
