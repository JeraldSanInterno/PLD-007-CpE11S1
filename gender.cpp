#include<iostream>
using namespace std;
int main()
{
	char gender;
	
	cout << "Enter your Gender(F/M): ";
	cin >> gender;
	
	switch (gender)
	{
		case'F':
		case'f':
			cout << "You're gender is Female";
		break;
		
		case'M':
		case'm':
			cout << "You're gender is Male";
		break;
	}
return 0;
}
