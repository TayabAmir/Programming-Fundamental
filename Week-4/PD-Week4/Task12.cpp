#include <iostream>
using namespace std;

void checkSpeed(float speed);

int main(){
	
	float speed;
	checkSpeed(speed);
	
}

void checkSpeed(float speed){
	
	string challengeSpeed;

	cout << "Speed: ";
	cin >> speed;
	
	if(speed > 100){
		cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}
	else{
		cout << "Perfect! You're going good.";
	}
}
