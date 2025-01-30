#include <iostream>
using namespace std;

int main(){

cout << "Enter the number of hours: ";
int inputValue;
cin >> inputValue;

int seconds = 3600;
int convertedValue;

convertedValue = inputValue * seconds;

cout << inputValue << " hours is equivalent to " << convertedValue << " seconds.";

}