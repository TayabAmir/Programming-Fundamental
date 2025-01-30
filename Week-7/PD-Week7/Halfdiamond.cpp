#include <iostream>
using namespace std;

int main()
{
	int rowsize;
	cout << "Enter the desired number of rows: ";
	cin >> rowsize;
	
	for(int row = 0; row <= rowsize/2; row++){
		
		for(int space = (rowsize/2)-row; space > 0; space--){
			cout << " ";		
		}
		for(int col = 0; col <= row; col++){
				cout <<"*";
			}
		cout << endl;
	}
	
	for(int row = 0; row <= rowsize/2; row++){
		
		for(int space = 0; space < row; space++){
			cout << " ";		
		}
		for(int col = (rowsize/2)-row ; col >= 0; col--){
				cout <<"*";
			}
		cout << endl;
		}
	
}
