#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, float holidays, float hometownWeekends){
	float weekends = 48;
	
	float gamesonHolidays = holidays * (2.0/3.0);
	float gamesonWeekends = (weekends-hometownWeekends) * (3.0/4.0);
	float gamesinHome = hometownWeekends;
	float totalGames = gamesonWeekends + gamesonHolidays + gamesinHome;
	totalGames = totalGames ;
	if (yearType == "normal"){
		return totalGames;
	} 
	else if (yearType=="leap"){
		return totalGames + (totalGames * 0.15);
	}
}
int main(){
	string yearType;
	float holidays, hometownWeekends;
	cout << "Enter year type: ";
	cin >> yearType;
	cout << "Enter number of holidays: ";
	cin >> holidays;
	cout << "Enter number of weekends: ";
	cin >> hometownWeekends;
	cout << calculateVolleyballGames(yearType,holidays,hometownWeekends);
}
