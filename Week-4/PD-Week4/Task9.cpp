#include <iostream>
using namespace std;

void equalNumbers(int num1, int num2);

int main(){

		int num1,num2;
    equalNumbers(num1, num2);
	
}

void equalNumbers(int num1, int num2){
	
	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the second number: ";
	cin >> num2;
	
	if (num1 == num2){
		cout << "true";
	}
	else{
		cout << "false";
	}
	
}
