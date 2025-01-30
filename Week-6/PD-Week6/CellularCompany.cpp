#include <iostream>
using namespace std;

int main(){
	char code,timeofDay;
	float min, amount, minRemaining;
	string serviceType;
	cout << "Enter the service code (R/r for regular, P/p for premium): ";
	cin >> code;
	if (code == 'P' || code == 'p'){
		cout << "Enter time of the call (D/d for day, N/n for night): ";
		cin >> timeofDay;
	}
	cout << "Enter the number of minutes used: ";
	cin >> min;
	
	if(code == 'R' || code == 'r'){
		serviceType = "Regular";
		minRemaining = min - 50;
		amount = 10.00 + (minRemaining * 0.20);
	}
	if(code == 'P' || code == 'p'){
		serviceType = "Premium";
		if(timeofDay=='d'||timeofDay=='D'){
			if(min<=75){
				amount = 25;
			}
			else if(min>75){
				minRemaining = min - 75;
				amount = 25.00 + (minRemaining * 0.10);
			}
		}
		if(timeofDay=='n'||timeofDay=='N'){
			if(min<=100){
				amount = 25;
			}
			else if(min>100){
				minRemaining = min - 100;
				amount = 25.00 + (minRemaining * 0.05);
			}
		}
	}
	
	cout << "Service Type: " << serviceType << endl;
	cout << "Total Minutes Used: " << min << " minutes" << endl;
	cout << "Amount Due: $" << amount;
}
