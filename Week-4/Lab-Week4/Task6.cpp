#include <iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

main(){
int marks;
cout << "Enter your score: ";
cin >> marks;

if (marks > 50){
pass(marks);
}

if (marks <= 50){
fail(marks);
}
}

void pass(int marks){
cout << "Pass";
}

void fail(int marks){
cout << "Fail";
}