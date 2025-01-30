#include <iostream>
using namespace std;

void sunday(string day, int amount);
void notSunday(string day, int amount);
main(){
string day;
int amount;

cout << "Enter the day of purchase: ";
cin >> day;

cout << "Enter the total purchase amount: $";
cin >> amount;

if (day == "Sunday"|| day == "sunday" || day == "Sun"){

sunday(day,amount);

}
if (day != "Sunday"){

notSunday(day,amount);

}
}

void sunday(string day, int amount){
float payable;
payable = amount * 0.9;
cout << "Payable Amount: $" << payable;
}

void notSunday(string day, int amount){
cout << "Payable Amount: $" << amount;
}