#include <iostream>
using namespace std;

void sum(float num1,float num2);
void subtract(float num1,float num2);
void multiply(float num1,float num2);
void divide(float num1,float num2);

main(){

float num1, num2;
char op;
cout<<"Enter 1st number: ";
cin >> num1;
cout<<"Enter 2nd number: ";
cin >> num2;
cout <<"Enter an operator (+, -, *, /): ";
cin >> op;

if (op == '+'){
sum(num1,num2);
}
if (op == '-'){
subtract(num1,num2);
}
if (op == '*'){
multiply(num1,num2);
}
if (op == '/'){
divide(num1,num2);
}

}



void sum(float num1,float num2){

cout << "Addition: " << num1 + num2 ;

}


void subtract(float num1,float num2){

cout << "Subtraction: " << num1 - num2 ;

}


void multiply(float num1,float num2){

cout << "Multiplication: " << num1 * num2 ;

}


void divide(float num1,float num2){

cout << "Division: " << num1 / num2 ;

}