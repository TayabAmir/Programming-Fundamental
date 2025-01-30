#include <iostream>
using namespace std;

int main(){
	
	float redRose, whiteRose, tulip, originalPrice;
	
	cout << "Red Rose: ";
	cin >> redRose;
	
	cout << "White Rose: ";
	cin >> whiteRose;
	
	cout << "Tulips: ";
	cin >> tulip;
	
	originalPrice = ((redRose * 2.00) + (whiteRose * 4.10) +(tulip * 2.50));
	
	 cout << "Original Price: $" << originalPrice;
	 cout << endl;
	
	if (originalPrice > 200){
		cout << "Price after Discount: $" << originalPrice * 0.8;
	}
	else{
		cout << "No discount applied.";
	}
}
