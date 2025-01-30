#include <iostream>
using namespace std;

void calculateFuel(double distance);

int main(){

double distance;
cout << "Enter the distance: ";
cin >> distance;

calculateFuel(distance);

}



void calculateFuel(double distance){

double fuel;
fuel = distance * 10;
cout << "Fuel needed: " << fuel;
}