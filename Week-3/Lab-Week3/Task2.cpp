#include <iostream>
using namespace std;

int main(){

cout << "Enter weight in pounds: ";
int a;
cin >> a;

float kgs = 0.45;
float pound;

pound = a * kgs;

cout << a << " pounds is equal to " << pound << " kilograms.";

}