#include <iostream>
using namespace std;

int main(){
	
	char Aa;
	
	cout << "Enter a character (A/a): ";
	cin >> Aa;
	
	if (Aa == 'A'){
		cout << "You have entered Capital " << Aa;
	}
	else{
		cout << "You have entered small "<< Aa;
	}
}
