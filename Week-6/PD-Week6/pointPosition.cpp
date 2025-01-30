#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);
int main(){
	int h,x,y;
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter x coordinate: ";
	cin >> x;
	cout << "Enter y coordinate: ";
	cin >> y;
	cout << checkPointPosition(h,x,y);
}
string checkPointPosition(int h, int x, int y){
	
	if (x<0 || x>h*3){
		return "Outside";
	}
	if (x>0 && x<h && y>h){
		return "Outside";
	}
	if(x>h*2 && y > h){
		return "Outside";
	}
	if(x>h*1 && x<h*2 && y>h*4){
		return "Outside";
	}
	if(x>0 && x<h*3 && y<h){
		return "Inside";
	}
	if(x>h&&x<h*2&& y<h*4){
		return "Inside";
	}
	if((x>=0||x<=3*h)&&y==0){
		return "Border";
	}
	if((x==h||x==h*2||x==h*3)&&y==h){
		return "Border";
	}
	if(x==h&&y>0&&y<=4*h){
		return "Border";
	}
	if(x==h*2&&y>0&&y<=4*h){
		return "Border";
	}
}
