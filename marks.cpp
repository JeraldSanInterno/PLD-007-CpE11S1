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
		 // Using a Nested If structure to determine the grade
    if (average >= 90 && average <= 100) {
        grade = 'A';
    } else if (average >= 80 && average < 90) {
        grade = 'B';
    } else if (average >= 70 && average < 80) {
        grade = 'C';
    } else if (average >= 60 && average < 70) {
        grade = 'D';
    } else if (average >= 40 && average < 60) {
        grade = 'E';
    } else {
        grade = 'F';
    }
	//output grade level
	cout << "Grade level: " << grade << endl;
	
return 0;
}