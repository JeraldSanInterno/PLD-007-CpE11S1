#include<iostream>
    #include<string>
    using namespace std;
    int main(){
        
        string DaysOfWeek[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        
        int DayIndex;
        while(true){
        cout << "Enter the number (0 to 6):  ";
        cin >> DayIndex;
       		 if (DayIndex == -1){
        	cout<<"Exiting the program." << endl;
        	break;
			}
            if (DayIndex >= 0 && DayIndex<=7){
                cout << DaysOfWeek[DayIndex] << endl;
            } else {
                cout << "Error, no such day." << endl;
            }
        return main();
        }   
        return 0;
    }
