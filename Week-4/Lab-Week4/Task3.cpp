#include <iostream>
using namespace std;

void howManyStickers(int length);
main(){

int length;
cout << "Enter the side length of the Rubik's Cube: ";
cin >> length;

howManyStickers(length);

}


void howManyStickers(int length){

cout << "Number of stickers needed: " << length * length * 6;

}