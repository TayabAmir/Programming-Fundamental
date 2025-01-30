#include <iostream>
using namespace std;

void eligible(int age);
void Noteligible(int age);

main(){

int age;
cout << "Enter your age: ";
cin >> age;

if (age >= 18){
  eligible(age);
}

if (age < 18){
  Noteligible(age);
}
}

void eligible(int age){

cout << "You are eligible to vote.";

}

void Noteligible(int age){

cout << "You are not eligible to vote.";

}