#include <iostream> 
using namespace std;
int main () {
	int numbers[5];
	int i = 0;

do {
	cout<< "Enter number " << (i+1) << ": ";
	cin >> numbers[i];
	i++;
} while (i < 5);
// Adding the first and last number
	int sum = numbers[0] + numbers[4];
//I Display the result 
	cout << "The sum of the first and last numbers is: " << sum << endl;
return 0;
}