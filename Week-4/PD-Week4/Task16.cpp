#include <iostream>
using namespace std;

int main(){
	
	int holidays, workingDays, timeforGames, norm, norm1, norm2;
	
	cout << "Holidays: ";
	cin >> holidays;
	
	workingDays = 365 - holidays;
	timeforGames = (workingDays * 63 + holidays * 127);
	norm = 30000 - timeforGames;

	
	if (norm > 0){
			norm1 = norm / 60;
	  	 	norm2 = norm % 60;
		cout << "Tom sleeps well" << endl;
		cout << norm1 << " hours and " << norm2 << " minutes less for play" << endl;
	}
	else{
			norm1 = -norm / 60;
			norm2 = -norm % 60;
		cout << "Tom will run away" << endl;
		cout << norm1 << " hours and " << norm2 << " minutes for play";
	}
	
}
