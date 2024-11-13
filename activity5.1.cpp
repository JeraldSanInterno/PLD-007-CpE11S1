#include <iostream>
#include <bitset>

struct BitData {
    unsigned int original;
    unsigned int reversed;
};

// Function to reverse the bits of an 8-bit integer
unsigned int reverseBits(unsigned int bit) {
    unsigned int result = 0;
    for (int i = 0; i < 8; ++i) {
        result <<= 1;
        result |= (bit & 1);
        bit >>= 1;
    }
    return result;
}

// Function to print the bits of a number
void printBits(unsigned int bit) {
    std::bitset<8> bits(bit);  // Using bitset to handle the binary output
    std::cout << bits << std::endl;
}

int main() {
    BitData data;

    std::cout << "Enter a number: ";
    std::cin >> data.original;

    std::cout << "Original bits: ";
    printBits(data.original);

    // Reverse the bits and store them
    data.reversed = reverseBits(data.original);

    std::cout << "Reversed bits: ";
    printBits(data.reversed);

    return 0;
}
