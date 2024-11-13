#include <iostream>
#include <algorithm>  // For sorting the array
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Calculate mid index

        // Check if the target is found at mid
        if (arr[mid] == target)
        {
            return mid; // Return the index if found
        }
        
        // If the target is greater than mid, discard the left half
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        // If the target is smaller than mid, discard the right half
        else
        {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    int arr[] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int size = sizeof(arr) / sizeof(arr[0]);  // Correctly calculate the size of the array
    int target;

    // Sort the array before performing binary search
    sort(arr, arr + size);

    // Ask the user to input a number to search for
    cout << "Enter a number to search: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Output the result of the search
    if(result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
