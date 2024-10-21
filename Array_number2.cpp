#include<iostream>
using namespace std;
int main()
{
 int responseSize = 40;
 int maxResponseSize = 10;
	
	int response[responseSize] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
	
	int frequency[maxResponseSize + 1] = {0};
	
	for (int i = 0; i < responseSize; ++i){
		int currentResponse = response[i];
		if (currentResponse >= 1 && currentResponse <= 10){
			frequency[currentResponse]++;
		}
	} 
	cout << "Response Summary; \t" << endl;
	for (int i = 1; i <= maxResponseSize; ++i){
		cout << "Response " << i << ": " << frequency[i] << " student" << endl; 
	}
	return 0;
} 
