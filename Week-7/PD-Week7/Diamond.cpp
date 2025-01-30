#include <iostream>
using namespace std;

int main()
{
	int rowsize;
	cout << "Enter the desired number of rows: ";
	cin >> rowsize;
	
	for(int row = rowsize; row >=1; row--){
		
		for(int col = row; col >= 1; col--){
			cout << "*";
		}
		cout << endl;
	}
}
