#include <iostream>
using namespace std;
string decideActivity(string temp, string humid);
int main(){
	string temp, humid;
	cout << "Enter temperature (warm or cold): ";
	cin >> temp;
	cout << "Enter humidity (dry or humid): ";
	cin >> humid;
	cout << "Recommended activity: " << decideActivity(temp,humid);
}
string decideActivity(string temp, string humid){
	
	if (temp=="warm"){
		if(humid=="dry"){
		return "Play Tennis";
	}
		else if(humid == "humid"){
		return "Swim";
		}
	}
	if (temp=="cold"){
		if(humid=="dry"){
		return "Play basketball";
	}
		else if(humid == "humid"){
		return "Watch tv";
		}
	}
	
	
}
