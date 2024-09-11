#include <iostream>
#include <string>
using namespace std;
int main () {
	float Percentage_Grade;

	//input of the Semestral Grade
	cout << "Enter you Semestral Grade : " << endl;
 		cin >> Percentage_Grade;
	
	//Grading System
	if (Percentage_Grade >= 94 && Percentage_Grade <= 100){
		cout << "Equivalent Grade: 1.00 " << endl << "Excellent";
	}else if (Percentage_Grade >= 88.5 && Percentage_Grade <= 93.99){
		cout << "Equivalent Grade: 1.25 " << endl << "Superior";
	}else if (Percentage_Grade >= 83 && Percentage_Grade <= 88.49){
		cout << "Equivalent Grade: 1.50 " << endl << "Meritorious";
	}else if (Percentage_Grade >= 77.5 && Percentage_Grade <= 82.99){
		cout << "Equivalent Grade: 1.75 " << endl << "Very Good";
	}else if (Percentage_Grade >= 72 && Percentage_Grade <= 77.49){
		cout << "Equivalent Grade: 2.00 " << endl << "Good";
	}else if (Percentage_Grade >= 65.5 && Percentage_Grade <= 71.99){
		cout << "Equivalent Grade: 2.25 " << endl << "Very Satisfactoty";
	}else if (Percentage_Grade >= 61 && Percentage_Grade <= 65.49){
		cout << "Equivalent Grade: 2.50 " << endl << "Satisfactory";
	}else if (Percentage_Grade >= 55.5 && Percentage_Grade <= 60.99){
		cout << "Equivalent Grade: 2.75 " << endl << "Fair";
	}else if (Percentage_Grade >= 50 && Percentage_Grade <= 55.49){
		cout << "Equivalent Grade: 3.00 " << endl << "Passing";
	}else if (Percentage_Grade >= 0 && Percentage_Grade <= 49.99){
		cout << "Equivalent Grade: 5.00 " << endl << "Failed";
	}else if (Percentage_Grade > 100 || Percentage_Grade < 0){
		cout << " Invalid Grade Input! " << endl;
}
		
		
	return 0;
}
