#include <iostream>
using namespace std;

int main () {

cout << "Enter a 4-digit number: ";
int number;
cin >> number;

int no1, no2, no3, no4, sum;

no1 = number % 10;

no2 = (number / 10) % 10;

no3 = (number / 100) % 10;

no4 = (number / 1000) % 10;

sum = no1 + no2 + no3 + no4;

cout << "Sum of the individual digits: " << sum;
}
