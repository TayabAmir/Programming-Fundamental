#include <iostream>
using namespace std;


void header(){
cout << "[----------------------------------------------------------------------------------------------]" << endl;
cout << "[  __  __             __   __        __   __   __   __   __   __             __        __   __ ]" << endl;
cout << "[ /|  /  | /  | /  | /  ||/  |      /    /  l /  l /    /    /  l /  l      /    /  l /  l /  l]" << endl;
cout << "[( | (___|(___|(___|(___||___|     ( __ (___l(   l(    (___ (___l(___l     (___ (___l(   l(___l]" << endl;
cout << "[  | |   )    )    )|   )|   )     |   )|\\   l   )l   )l    l\\       )         )l   )l   )l    ]" << endl;
cout << "[  | |  /  __/  __/ |  / |__/      |__/ | \\  l__/ l__/ l__  l \\   __/       __/ l  / l__/ l    ]" << endl;
cout << "[----------------------------------------------------------------------------------------------]" << endl << endl;              
}
int menu(){
	cout << "1)- Add Item 1... " << endl;
	cout << "2)- Add Item 2... " << endl;
	cout << "3)- Add Item 3... " << endl;
	cout << "4)- Check Total Amount... " << endl;
	cout << "5)- Exit " << endl;
	int option;
	cout << "Enter Option.. ";
	cin >> option;
	return option;
}
int main(){
		string item1;
		float priceofItem1, tax, pricewithTax1;
		string item2;
		float priceofItem2, tax2, pricewithTax2;	
		string item3;
		float priceofItem3, tax3, pricewithTax3;
		float totalPrice;
	header();
	cout << "           " << "Enter all the options LINE-WISE                    " << endl << endl;
	int option;
	option = menu();
	cout << endl;
	if (option == 1){

		cout << "Enter the first Item... ";
		cin >> item1;
		cout << "Enter the price of item (in pkr)... ";
		cin >> priceofItem1;
		cout << "Enter the tax on item (in %)... ";
		cin >> tax;
		pricewithTax1 =	 priceofItem1 + (priceofItem1 * (tax / 100));
	}
	cout << endl;
	option = menu();
	cout << endl;
		if (option == 2){
		cout << "Enter the second Item... ";
		cin >> item2;
		cout << "Enter the price of item (in pkr)... ";
		cin >> priceofItem2;
		cout << "Enter the tax on item (in %)... ";
		cin >> tax2;
		pricewithTax2 =	 priceofItem2 + (priceofItem2 * (tax2 / 100));
	}
	cout << endl;
	option = menu();
	cout << endl;
		if (option == 3){
			cout << "Enter the third Item... ";
			cin >> item3;
			cout << "Enter the price of item (in pkr)... ";
			cin >> priceofItem3;
			cout << "Enter the tax on item (in %)... ";
			cin >> tax3;
			pricewithTax3 =	 priceofItem3 + (priceofItem3 * (tax3 / 100));
	}
	cout << endl;
	option = menu();
	cout << endl;
		totalPrice = pricewithTax1 + pricewithTax2 + pricewithTax3;
		if (option == 4){
			cout << "   ITEMS   "  << "    PRICE OF ITEMS    "   <<  "    TAX    "  <<  "    PRICE(INCLUDING TAX)     " << endl;
			cout << " 1- " << item1 << "        " << priceofItem1   << "                   "  << tax << "           "  << pricewithTax1 << endl;
			cout << " 2- " << item2 << "        " << priceofItem2   << "                   "  << tax2 << "           "  << pricewithTax2 << endl;
			cout << " 3- " << item3 << "        " << priceofItem3   << "                   "  << tax3 << "           "  << pricewithTax3 << endl;
			cout << "                                                               "  << totalPrice;
		}
	cout << endl;
	option = menu();
	cout << endl;
		if (option == 5){
			cout << "Thanks for shopping here";
		}
}                                                                                          
