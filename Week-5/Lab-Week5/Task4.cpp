#include <iostream>
#include <cmath>
using namespace std;

int main(){
 	
 	float distance, angleinDegree, angleinRadian, angleinTan;
 	
 	cout << "Enter the distance from the base of the tree (in feet): ";
 	cin >> distance;
 	
 	cout << "Enter the angle of elevation (in degrees): ";
 	cin >> angleinDegree;
 	
 	angleinRadian = angleinDegree * 0.0174532863;
 	angleinTan = tan(angleinRadian);
 	
 	cout << "The height of the tree is: " << angleinTan * distance;

}
