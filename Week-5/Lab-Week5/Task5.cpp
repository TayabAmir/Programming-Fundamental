#include <iostream>
#include <cmath>
using namespace std;

void roots(float det, float a, float b, float c);

int main(){
	
	float a, b, c, det;
	cout << "Enter the value of a: ";
	cin >> a;
	
	cout << "Enter the value of b: ";
	cin >> b;
	
	cout << "Enter the value of c: ";
	cin >> c;
	
	det = pow(b,2) - 4 * a * c;
	roots(det,a,b,c);
}
void roots(float det, float a, float b, float c){
	float root1, root2 = 0;
	float half1, half2;

	if(det > 0){
		root1 = (-b + sqrt(det)) / 2*a;
		root2 = (-b - sqrt(det)) / 2*a;
		
		cout << "Solutions: x = " << root1 << " x = " << root2;
	}
		
	if(det == 0){
		root1 = -b/2*a;
		cout << "Solution: x = " << root1;
	}
	
	if(det < 0){
		half1 = (-b/2*a);
		half2 = sqrt(-det)/2*a;
		
		cout << "Complex Solutions: x = " << half1 << " + " << half2 << "i" << " and x = " << half1 << " - " << half2 << "i";
	}
}
