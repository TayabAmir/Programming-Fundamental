#include <iostream>
using namespace std;

int main () {

float vegPrice, fruitPrice, vegKg, fruitKg, earninginCoins, earninginRs;

cout << "Enter vegetable price per kilogram (in coins): ";
cin >> vegPrice;

cout << "Enter fruit price per kilogram (in coins): ";
cin >> fruitPrice;

cout << "Enter total kilograms of vegetables: ";
cin >> vegKg;

cout << "Enter total kilograms of fruits: ";
cin >> fruitKg;

earninginCoins = (vegKg * vegPrice) + (fruitKg * fruitPrice);
earninginRs = earninginCoins / 1.94;

cout << "Total earnings in Rupees (Rps): " << earninginRs;

}