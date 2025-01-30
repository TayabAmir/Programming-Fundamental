#include <iostream>
using namespace std;

int main(){
	
	int people, TP, sheets, reqTP;
	
	cout << "Numer of people in the household: ";
	cin >> people;
	
	cout << "Number of rolls of TP: ";
	cin >> TP;
	
	sheets = TP * 500;
	reqTP = sheets / (people * 57);
	
	if(reqTP < 15){
		cout << "Your TP will only last " << reqTP << " days, buy more!";
	}
	else{
		cout << "Your TP will last " << reqTP << " days, no need to panic!";
	}
}
