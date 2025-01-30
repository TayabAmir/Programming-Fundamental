#include <iostream>
using namespace std;

int main() {

cout << "Number of Minutes: ";
int min;
cin >> min;

cout << "Frames per Second: ";
int frame;
cin >> frame;

int a;
a = min * 60;

int b;
b = a * frame;

cout << "Total Number of Frames: " << b ;

}
