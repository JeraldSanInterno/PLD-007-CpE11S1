#include <iostream>
using namespace std;

int main() {
    // Create an 8x8 chessboard
    char chessBoard[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, // 1st row (white pieces)
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // 2nd row
        {" "}, // 3rd row
        {" "}, // 4th row
        {" "}, // 5th row
        {" "}, // 6th row
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // 7th row (black pawns)
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}  // 8th row (black pieces)
    };

    // Display the chessboard
    cout << "Chessboard:" << endl;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << chessBoard[i][j] << ' ';
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
