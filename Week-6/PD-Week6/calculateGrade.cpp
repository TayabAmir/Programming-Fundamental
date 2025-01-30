#include <iostream>
using namespace std;

string calculateGrade(float percent);
float calculateAverage(float eng,float math,float chem,float ss,float bio);
int main(){
	string name;
	float eng, math, chem, ss, bio, percent;
	cout<<"Enter student name: ";
	cin >> name;
	cout<<"Enter marks for English: ";
	cin >> eng;
	cout<<"Enter marks for Maths: ";
	cin >> math;
	cout<<"Enter marks for Chemistry: ";
	cin >> chem;
	cout<<"Enter marks for Social Science: ";
	cin >> ss;
	cout<<"Enter marks for Biology: ";
	cin >> bio;
	percent = calculateAverage(eng,math,chem,ss,bio);
	cout << "Student Name: " << name << endl;
	cout << "Percentage: " << percent << "%"<< endl;
	cout << "Grade: " << calculateGrade(percent); 
}
float calculateAverage(float eng,float math,float chem,float ss,float bio){
	return (eng+math+chem+ss+bio)/5;
}
string calculateGrade(float percent){
	if(percent >= 90 && percent <= 100){
		return "A+";
	}
	else if(percent >= 80 && percent < 90){
		return "A";
	}
	else if(percent >= 70 && percent < 80){
		return "B+";
	}
	else if(percent >= 60 && percent < 70){
		return "B";
	}
	else if(percent >= 50 && percent < 60 ){
		return "C";
	}
	else if(percent >= 40 && percent < 50){
		return "D";
	}
	else if(percent < 40){
		return "F";
	} 
}
