#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string day, float quantity);
int main(){
	string fruit, day;
	float quantity;
	cout << "Enter the fruit: ";
	cin >> fruit;
	cout << "Enter the day (e.g., Monday, Tuesday..): ";
	cin >> day;
	cout << "Enter the quanity of fruits: ";
	cin >> quantity;
	cout << calculateFruitPrice(fruit,day,quantity);
}
float calculateFruitPrice(string fruit, string day, float quantity){
	
	if(day!="Saturday" && day!="Sunday" && fruit =="banana"){
		return quantity*2.50;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="apple"){
		return quantity*1.20;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="orange"){
		return quantity*0.85;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="grapefruit"){
		return quantity*1.45;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="kiwi"){
		return quantity*2.70;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="pineapple"){
		return quantity*5.50;
	}
	if(day!="Saturday" && day!="Sunday" && fruit =="grapes"){
		return quantity*3.85;
	}
	
	
	if((day=="Saturday" || day=="Sunday") && fruit =="banana"){
		return quantity*2.70;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="apple"){
		return quantity*1.25;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="orange"){
		return quantity*0.90;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="grapefruit"){
		return quantity*1.60;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="kiwi"){
		return quantity*3.00;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="pineapple"){
		return quantity*5.60;
	}
	if((day=="Saturday" || day=="Sunday") && fruit =="grapes"){
		return quantity*4.20;
	}
}
