#include<iostream>
using namespace std;
int main()
{
	char calc;
	float x, y, result;
	
	cout << "CALCULATOR" << endl;
	cout << "Enter the number that you want to calculate: " << endl;
	cout << "value of x:          ";
	cin >> x;
	cout << "Operation (+,-,*,/): ";
	cin >> calc;
	cout << "value of y:          ";
	cin >> y;
	
	switch (calc)
	{
		case'+':
			result = x + y;
		break;
		
		case'-':
			result = x - y;
		break;
		
		case'*':
			result = x * y;
		break;
		
		case'/':
			if (y!=0){
			result = x / y;
			break;
			} else {
				cout << "Undefined ";
			}
		break;
	}
	cout << "Result: " << result;

return 0;
}
