#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//declare the 5 subject 
	float Physics, Chemistry, Biology, Mathematics, Computer;
	char grade;
	//input the grades
	cout << "Enter the marks for Physics: ";
	cin >> Physics;
	cout << "Enter the marks for Biology: ";
	cin >> Biology;
	cout << "Enter the marks for Mathematics: ";
	cin >> Mathematics;
	cout << "Enter the marks for Computer: ";
	cin >> Computer;
	cout << "Enter the marks for Chemistry: ";
	cin >> Chemistry;
	cout << endl;
	//compute for the average of all marks
	float average = (Physics + Chemistry + Biology + Mathematics + Computer) / 5;
	//output
	cout << "Physics grade: " << Physics << endl;
	cout << "Biology grade: " << Biology << endl;
	cout << "Mathematics grade: " << Mathematics << endl;
	cout << "Computer grade: " << Computer << endl;
	cout << "Chemistry grade: " << Chemistry << endl;
	cout<< "____________" << endl;
	//show the average
	cout << "Average: " << average <<endl;
	//floor to round down the average, then divide by 10
	int gradeGroup = floor(average/10);
	switch (gradeGroup){
		case 10:
		case 9:
			grade = 'A';
				break;
		case 8:
			grade = 'B';
				break;
		case 7: 
			grade = 'C';
				break;
		case 6: 
			grade = 'D';
				break;
		case 5:
		case 4:
			grade = 'E';
				break;	
		default:
			grade = 'F';
				break;
		}
	//output grade level
	cout << "Grade level: " << grade << endl;
	
return 0;
}