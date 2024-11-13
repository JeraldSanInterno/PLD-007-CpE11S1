#include <iostream>

bool multiple(int number, int x) {
    return (number % x == 0);
}

int main() {
    int number, x;
    
    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    std::cout << "Enter the multiple to check (x): ";
    std::cin >> x;

    // Check and output result
    if (multiple(number, x)) {
        std::cout << number << " is a multiple of " << x << ".\n";
    } else {
        std::cout << number << " is not a multiple of " << x << ".\n";
    }

    return 0;
}
