#include<iostream>
using namespace std;
int main()
{
		int arr[10] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1,};
		
		cout << "Element" << "\t" << "Value" << "\t" << "Histogram" << endl;
		
		for (int i = 0; i < 10; ++i){
			cout << i << "\t" << arr[i] << "\t";
			
			for (int j = 0; j < arr[i]; ++j)
			
			{
				cout << "*";
			}
			cout << endl;
		}
	return 0;
} 
