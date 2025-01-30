#include <iostream>
using namespace std;

int main(){
while(true){	
	string country;
	float actualPrice, discountPrice;
	
	cout << "Enter the country's name: ";
	cin >> country;
	
	cout << "Enter the ticket price in dollars: $";
	cin >> actualPrice;
	
	if (country == "Pakistan"){
		discountPrice = actualPrice * 0.95;
	}
	if (country == "Ireland"){
		discountPrice = actualPrice * 0.9;
	}
	if (country == "India"){
		discountPrice = actualPrice * 0.8;
	}
	if (country == "England"){
		discountPrice = actualPrice * 0.7;
	}
	if (country == "Canada"){
		discountPrice = actualPrice * 0.55;
	}
	
    cout << "Final ticket price after discount: $" << discountPrice;
	cout << endl << endl;
	
	}
	
}
