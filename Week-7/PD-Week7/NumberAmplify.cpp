#include<iostream>
using namespace std;

int main(){
	int number;
	int y = 0;
	cout << "Enter the number to Amplify: ";
	cin >> number;
	
	for(int num = 1; num <= number; num++){
		y = num;
		if(num%4==0){
			y = num*10;
		}
		cout << y << ", ";
	}
}
