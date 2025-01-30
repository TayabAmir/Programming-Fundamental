#include <iostream>
using namespace std;

int main(){

cout << "Enter your age in years: ";
int age;
cin >> age;

int days = 365;
int output;

output = age * days;

cout << "Your age in days is approximately " << output << " days.";


}