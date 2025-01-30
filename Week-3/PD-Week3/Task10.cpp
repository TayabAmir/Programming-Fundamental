#include <iostream>
using namespace std;

int main () {

int Num1, Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9, Num10, Num11, Num12, Num13, Num14, Num15, sum, subtract, multiply, sum2, result;

cout << "Number 1: ";
cin >> Num1;
cout << "Number 2: ";
cin >> Num2;
cout << "Number 3: ";
cin >> Num3;
cout << "Number 4: ";
cin >> Num4;
cout << "Number 5: ";
cin >> Num5;
cout << "Number 6: ";
cin >> Num6;
cout << "Number 7: ";
cin >> Num7;
cout << "Number 8: ";
cin >> Num8;
cout << "Number 9: ";
cin >> Num9;
cout << "Number 10: ";
cin >> Num10;
cout << "Number 11: ";
cin >> Num11;
cout << "Number 12: ";
cin >> Num12;
cout << "Number 13: ";
cin >> Num13;
cout << "Number 14: ";
cin >> Num14;
cout << "Number 15: ";
cin >> Num15;

sum = Num1 + Num2 + Num3 + Num4 + Num5;
multiply = Num6 * Num7 * Num8 * Num9 * Num10;
subtract = Num11 - Num12 - Num13 - Num14 - Num15;

sum2 = sum + multiply;
result = sum2 - subtract;

cout << "The final result is: " << result;

}
