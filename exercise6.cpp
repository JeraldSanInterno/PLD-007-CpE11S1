#include <iostream>
using namespace std;

// Function to perform linear search
int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

int main() {
    // Initialize the array
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array
    int target;

    // Input the number to search
    cout << "Enter a number to search: ";
    cin >> target;

    // Perform the search and display result
    int result = linearsearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
