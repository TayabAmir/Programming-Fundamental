#include <iostream>
using namespace std;

void dicegame(int urPosition,int friendPosition);

int main(){
	int urPosition, friendPosition;
    dicegame(urPosition,friendPosition);  
  
}

void dicegame(int urPosition,int friendPosition){
	
	int position;
	
	cout << "Enter your position: ";
	cin >> urPosition;
	
	cout << "Enter your friend's position: ";
	cin >> friendPosition;
	
	position = friendPosition - urPosition;
  
  if ( position > 6){
  		cout << "false";
  }
  else{
  		cout << "true";
  }

	
}
