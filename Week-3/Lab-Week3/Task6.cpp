#include <iostream>
using namespace std;

int main(){

cout << "Enter the size in megabytes (MB): ";
float inputValue;
cin >> inputValue;

float bits = 8388608;
float convertedValue;

convertedValue = inputValue * bits;

cout << inputValue << " MB is equivalent to " << convertedValue << " bits.";

}