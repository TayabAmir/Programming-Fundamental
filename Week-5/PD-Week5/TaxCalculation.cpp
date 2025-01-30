#include <iostream>
using namespace std;

float calculateTax(float price, float taxRate);

int main(){
	
	char vehicleCode;
	float price,taxAmount;
	float finalPrice = 0;
	int taxRate;
	
	cout << "Enter the vehicle type code (M, E, S, V, T): ";
	cin >>  vehicleCode;
	cout << "Enter the price of the vehicle: $";
	cin >> price;
	
	if ( vehicleCode == 'M'){
		taxAmount = calculateTax(price, 6);
	}
	if ( vehicleCode == 'E'){
		taxAmount = calculateTax(price, 8);
	}
	if ( vehicleCode == 'S'){
		taxAmount = calculateTax(price, 10);
	}
	if ( vehicleCode == 'V'){
		taxAmount = calculateTax(price, 12);
	}
	if ( vehicleCode == 'T'){
		taxAmount = calculateTax(price, 15);
	}
	
	finalPrice = price + taxAmount;
	
	cout << "The final price of a vehicle of type " << vehicleCode << " after adding the tax is $" << finalPrice;
	
}

float calculateTax(float price, float taxRate){
	
	return price * (taxRate / 100);
}
