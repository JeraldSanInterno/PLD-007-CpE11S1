#include <iostream>
using namespace std;
int main()
{
	//create a c++ program to determine if alphabet is vowel or consonant 
	
	char letters;
	
	cout << "Enter the character: ";
	cin >> letters;
	
	switch(letters)
	{
		case 'A':
		case 'a':
			cout << "The letter is a vowel";
		break; 
		
		case 'E':
		case 'e':
			cout << "The letter is a vowel";
		break;
		
		case 'I':
		case 'i':
			cout << "The letter is a vowel";
		break;
		
		case 'O':
		case 'o':
			cout << "The letter is a vowel";
		break;
		
		case 'U':
		case 'u':	
			cout << "The letter is a vowel";
		break; 
		
		default:
			{
				cout <<"The letter is a consonant";
				break;
			}
	}
	
 return 0;
}
