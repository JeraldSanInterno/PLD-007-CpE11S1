#include<iostream>
using namespace std;
int main(){
	//declare the 5 subject 
	float Physics, Chemistry, Biology, Mathematics, Computer;
	float percentage;
	char grade;
	//input the grades
	cout << "Enter the marks for Physics: ";
	cin >> Physics;
	cout << "Enter the marks for Chemistry: ";
	cin >> Chemistry;
	cout << "Enter the marks for Biology: ";
	cin >> Biology;
	cout << "Enter the marks for Mathematics: ";
	cin >> Mathematics;
	cout << "Enter the marks for Computer: ";
	cin >> Computer;
	cout << endl;
	//compute for the average of all marks
	float average = (Physics + Chemistry + Biology + Mathematics + Computer)/5;
	//output
	cout << "Physics grade: " << Physics << endl;
	cout << "Chemistry grade: " << Chemistry << endl;
	cout << "Biology grade: " << Biology << endl;
	cout << "Mathematics grade: " << Mathematics << endl;
	cout << "Computer grade: " << Computer << endl;
	//show the average
	cout << "Average: " << average;
		
	
	return 0;
}
