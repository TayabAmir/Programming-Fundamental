#include <iostream>
using namespace std;

int main(){

cout << "Enter the student's name: ";
string name;
cin >> name;

cout << "Enter matriculation marks (out of 1100): ";
float matric;
cin >> matric;

cout << "Enter intermediate marks (out of 550): ";
float inter;
cin >> inter;

cout << "Enter Ecat marks (out of 400): ";
float Ecat;
cin >> Ecat;

float agg;
agg = ((matric/11)*0.1) + ((inter/5.5)*0.4) + ((Ecat/4)*0.5);

cout << "Aggregate score for " << name << " in UET is: " << agg << "%"; 
}
