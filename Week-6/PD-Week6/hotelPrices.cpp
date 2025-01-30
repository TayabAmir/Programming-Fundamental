#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int stay);
int main(){
string month;
int stay;
	cout << "Enter the month (May, June, July, August, September, October): ";
	cin >> month;
	cout << "Enter the number of stays: ";
	cin >> stay;
	cout << calculateHotelPrices(month, stay);
}
string calculateHotelPrices(string month, int stay){
	float studioPrice, apartmentPrice;
	if(month=="May"||month=="October"){
		studioPrice = 50 * stay;
		apartmentPrice = 65 * stay;
		if (stay>7 && stay<=14){
			studioPrice = studioPrice * 0.95;
		}
		if (stay>14){
			studioPrice = studioPrice * 0.7;
		}
	}
	if(month=="June"||month=="September"){
		studioPrice = 75.20 * stay;
		apartmentPrice = 68.70 * stay;
		if (stay>14){
			studioPrice = studioPrice * 0.8;
		}
	}
	if(month=="July"||month=="August"){
		studioPrice = 76 * stay;
		apartmentPrice = 77 * stay;
	}
	if(stay>14){
		apartmentPrice = apartmentPrice * 0.9;
	}
	
	
	return "Apartment: " + to_string(apartmentPrice) + "$. \nStudio: " + to_string(studioPrice) + "$.";
}
