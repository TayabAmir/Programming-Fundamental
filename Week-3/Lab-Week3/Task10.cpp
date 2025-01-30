#include <iostream>
using namespace std;

int main(){

cout << "Enter the name of the cricket team: ";
string team;
cin >> team;

cout << "Enter the number of wins: ";
int win;
cin >> win;

cout << "Enter the number of draws: ";
int draw;
cin >> draw;

cout << "Enter the number of losses: ";
int loss;
cin >> loss;

int points;

points = (win * 3) + (draw * 1) + (loss * 0);

cout << team << " has obtained " << points << " points in the Asia Cup tournament.";
 

}
