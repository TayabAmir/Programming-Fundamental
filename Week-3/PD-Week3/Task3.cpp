#include <iostream>
using namespace std;

int main() {

cout << "Enter Initial Velocity (m/s): ";
float vi;
cin >> vi;

cout << "Enter Acceleration (m/s^2): ";
float a;
cin >> a;

cout << "Enter Time (s): ";
float t;
cin >> t;

float vf;
vf = (a * t) + vi;

cout << "Final Velocity (m/s): " << vf;
return 0;
}
