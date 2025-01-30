#include <iostream>
using namespace std;

void printName(string name);

int main(){
	
	string name;
	printName(name);

	
}

void printName(string name){
	
	cout << "Enter your name: ";
	cin >> name;
	
		while(true){
		cout << name;
	}
	
}
