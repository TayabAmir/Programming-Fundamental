#include <iostream>
using namespace std;

int main(){
	int hours, minutes, hoursintoMin;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	
	hoursintoMin = hours * 60;
	
	if (hoursintoMin > minutes){
		cout << hours;
	}
	else {
		cout << minutes;
	}
}
