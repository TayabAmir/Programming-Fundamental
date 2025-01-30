#include <iostream>
using namespace std;

int main(){

cout << "Enter voltage (in volts): ";
float volts;
cin >> volts;

cout << "Enter current (in amperes): ";
float current;
cin >> current;

float power;

power = volts * current;

cout << "The power is " << power << " watts.";


}