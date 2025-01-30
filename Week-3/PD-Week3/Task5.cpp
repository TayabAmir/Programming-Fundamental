#include <iostream>
using namespace std;

int main() {

cout << "Enter the Name of the Person: ";
string person;
cin >> person;

cout << "Enter the target weight loss in kilograms: ";
float kgs;
cin >> kgs;

float days;
days = kgs * 15;

cout << person << " will need " << days << " days to lose " << kgs << " kg of weight by following the doctor's suggestions";

}
