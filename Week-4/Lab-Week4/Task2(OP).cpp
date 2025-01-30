#include <iostream>
using namespace std;

void inchesTofoot (float inches);

main(){

float inches;
cout << "Enter the measurement in inches: ";
cin >> inches;

inchesTofoot (inches);


}


void inchesTofoot (float inches){

cout << "Equivalent in feet: " << inches / 12;

}