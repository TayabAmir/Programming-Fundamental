#include <iostream>
using namespace std;

int main() {

string movie;
int adultTicket, childTicket, adultSold, childSold, percent, totalAmount, donation, remainingAmount;

cout << "Enter the movie name: ";
cin >> movie;

cout << "Enter the adult ticket price: $";
cin >> adultTicket;

cout << "Enter the child ticket price: $";
cin >> childTicket;

cout << "Enter the number of adult tickets sold: ";
cin >> adultSold;

cout << "Enter the number of child tickets sold: ";
cin >> childSold;
 
cout <<"Enter the percentage of the amount to be donated to charity: ";
cin >> percent;
cout<<endl;
totalAmount = (adultTicket * adultSold) + (childTicket * childSold);
donation = (totalAmount * 0.1);
remainingAmount = (totalAmount - donation);

cout << "Movie: " << movie << endl;
cout << "Total amount generated from ticket sales: $" << totalAmount << endl;
cout << "Donation to charity (" << percent << "%): $" << donation << endl;
cout << "Remaining amount after donation: $" << remainingAmount << endl;


}
