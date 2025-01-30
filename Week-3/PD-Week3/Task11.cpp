#include <iostream> 
using namespace std;

int main(){

int age, moved, lived;

cout << "Enter the person's age: ";
cin >> age;

cout << "Enter the number of times they've moved: ";
cin >> moved;

lived = age / (moved + 1);

cout << "Average number of years lived in the same house: " << lived;


}