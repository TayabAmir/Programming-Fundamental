#include <iostream>
using namespace std;

int main(){
	
	int number, num1, num3;
	
	cout << "Enter a three-digit number: ";
	cin >> number;
	
	num1 = number / 100;
	num3 = number % 10;
	
	if (num1 == num3){
		cout << "The number is symmetrical.";
	}
	else{
		cout << "The number is not symmetrical.";
	}
}
