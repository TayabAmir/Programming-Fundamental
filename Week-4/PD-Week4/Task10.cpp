#include <iostream>
using namespace std;

 void Boolean(string Bool);

int main(){
	
	string Bool;
   Boolean(Bool);
	
}

   void Boolean(string Bool){
   
	cout << "Enter 'true' or 'false': ";
	cin >> Bool;
	
	if ( Bool == "true" ){
		cout << "false";
	}
	else {
		cout << "true";
	}
}
