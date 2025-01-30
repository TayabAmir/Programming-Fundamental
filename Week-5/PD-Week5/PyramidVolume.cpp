#include<iostream>
#include <cmath>
using namespace std;

float pyramidVolume(float length, float width, float height, string unit);

int main(){
	
	float length, width, height, volume;
	string unit;
	
	cout << "Enter the length of the pyramid (in meters): ";
	cin >> length;
	cout << "Enter the width of the pyramid (in meters): ";
	cin >> width;
	cout << "Enter the height of the pyramid (in meters): ";
	cin >> height;
	cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin >> unit;
	
	volume = pyramidVolume(length,width,height,unit);
	
	if (unit == "millimeters"){
		volume = volume * pow(10,9);
	}
	if (unit == "centimeters"){
		volume = volume * pow(10,6);
	}
	if (unit == "kilometers"){
		volume = volume / pow(10,9);
	}
	
	cout << "THe volume of the pyramid is: " << volume << " cubic " << unit;
	
}

float pyramidVolume(float length, float width, float height, string unit){
	
	float volume = (length * width * height) / 3;
	return volume;
}
