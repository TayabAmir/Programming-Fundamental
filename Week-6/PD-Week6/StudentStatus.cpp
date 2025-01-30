#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin);
int main(){
	int examHour,examMin,studentHour,studentMin;
	
	cout << "Enter Exam Starting Time (hour): ";
	cin >> examHour;
	cout << "Enter Exam Starting Time (minutes): ";
	cin >> examMin;
	cout << "Enter Student hour of arrival: ";
	cin >> studentHour;
	cout << "Enter Student minutes of arrival: ";
	cin >> studentMin;
	cout << checkStudentStatus(examHour,examMin,studentHour,studentMin);
}
string checkStudentStatus(int examHour, int examMin, int studentHour, int studentMin){
	int examMinutes, studentMinutes;
	examMinutes = (examHour*60)+examMin;
	studentMinutes = (studentHour*60)+studentMin;
	
	if(examMinutes - studentMinutes > 30){
		int earlyTime,earlyTimeHours,earlyTimeMin;
		cout << "Early" << endl;
		earlyTime = examMinutes - studentMinutes;
		cout << "Test: " << earlyTime << endl;
		earlyTimeHours = earlyTime / 60;
		earlyTimeMin = earlyTime % 60;
		if((earlyTimeHours*60)+earlyTimeMin>=60){
		return to_string(earlyTimeHours) + ":" + to_string(earlyTimeMin) +" hours before the start";
		}
		if((earlyTimeHours*60)+earlyTimeMin<60){
		return to_string(earlyTimeMin) + " minutes before the start";
		}
	}
	
	if(examMinutes - studentMinutes <= 30 && examMinutes - studentMinutes >= 0){
		return "On Time";
	}
	
	if(examMinutes - studentMinutes < 0){
	int lateTime,lateTimeHours,lateTimeMin;
		cout << "Late" << endl;
		lateTime = -(examMinutes - studentMinutes);
		cout << "Test: " << lateTime << endl;
		lateTimeHours = lateTime / 60;
		lateTimeMin = lateTime % 60;
		if((lateTimeHours*60)+lateTimeMin >60){
		return to_string(lateTimeHours)+ ":" + to_string(lateTimeMin) +" hours after the start";
		}
		if((lateTimeHours*60)+lateTimeMin <60){
		return to_string(lateTimeMin) + " minutes after the start";
		}
	}
}
