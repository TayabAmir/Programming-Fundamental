#include <iostream>
using namespace std;
string timeTravel(int hours, int min);

int main(){
	
	int hours, min;
	
	cout << "Enter Hours: ";
	cin >> hours;
	
	cout << "Enter Minutes: ";
	cin >> min;
	
	timeTravel(hours,min);
	
	
}

string timeTravel(int hours, int min){
	
	int totalMin, newHours, newMin, time;
	string result;
	totalMin = (hours * 60) + min + 15;
	newHours = totalMin / 60;
	newMin = totalMin % 60;
	
}
