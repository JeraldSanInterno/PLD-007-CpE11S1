#include <iostream>

//VOID - used in function "DrawBoard", "Player1Move", and "Player2Move" to declared a 
//return, which means they perform their tasks without returning any values.
void DrawBoard(char *spaces); //displays the current state of the game board
void Player1Move(char *spaces, char player1); //handles input for Player 1's move
void Player2Move(char *spaces, char player2); //handles input for Player 2's move
bool IsWinner(char *spaces, char player); //checks if a player has won
bool IsTie(char *spaces); //checks if the game has resulted in a tie

int main() {
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; //spaces to enter the marker
    char player1 = 'X';
    char player2 = 'O';
    bool running = true;
    bool player1Turn = true; // Use a boolean to switch turns


    DrawBoard(spaces);
    while (running) {
        if (player1Turn) {
            Player1Move(spaces, player1);
        } else {
            Player2Move(spaces, player2);
        }

        DrawBoard(spaces);

        // Check for winner
        if (IsWinner(spaces, player1)) {
            std::cout << "Player 1 (X) wins!" << std::endl;
            break;
        }
        if (IsWinner(spaces, player2)) {
            std::cout << "Player 2 (O) wins!" << std::endl;
            break;
        }

        // Check for tie
        if (IsTie(spaces)) {
            std::cout << "It's a tie!" << std::endl;
            break;
        }

        // Switch turns
        player1Turn = !player1Turn; // Toggle the turn between players
    }

    return 0;
}

void DrawBoard(char *spaces) {
    std::cout << "    |    |    " << '\n';
    std::cout << " " << spaces[0] << "  | " << spaces[1] << "  | " << spaces[2] << '\n';
    std::cout << "----|----|----" << '\n';
    std::cout << "    |    |    " << '\n';
    std::cout << " " << spaces[3] << "  |  " << spaces[4] << " |  " << spaces[5] << '\n';
    std::cout << "----|----|----" << '\n';
    std::cout << "    |    |    " << '\n';
    std::cout << " " << spaces[6] << "  |  " << spaces[7] << " |  " << spaces[8] << '\n';
    std::cout << "    |    |    " << '\n';
}

void Player1Move(char *spaces, char player1) {
    int number;
    while (true) {
        std::cout << "Player 1 (X), enter a number to place your marker (1-9): ";
        std::cin >> number;

        if (number < 1 || number > 9) {
            std::cout << "Invalid input. Please enter a number between 1 and 9." << std::endl;
            continue;
        }

        number--; // Convert 1-9 input to 0-8 index
        if (spaces[number] == ' ') {
            spaces[number] = player1;
            break;
        } else {
            std::cout << "Space already occupied. Choose another position." << std::endl;
        }
    }
}

void Player2Move(char *spaces, char player2) {
    int number;
    while (true) {
        std::cout << "Player 2 (O), enter a number to place your marker (1-9): ";
        std::cin >> number;

        if (number < 1 || number > 9) {
            std::cout << "Invalid input. Please enter a number between 1 and 9." << std::endl;
            continue;
        }

        number--; // Convert 1-9 input to 0-8 index
        if (spaces[number] == ' ') {
            spaces[number] = player2;
            break;
        } else {
            std::cout << "Space already occupied. Choose another position." << std::endl;
        }
    }
}

bool IsWinner(char *spaces, char player) {
    // Check horizontal, vertical, and diagonal lines for a win
    return ((spaces[0] == player && spaces[1] == player && spaces[2] == player) || // Row 1
            (spaces[3] == player && spaces[4] == player && spaces[5] == player) || // Row 2
            (spaces[6] == player && spaces[7] == player && spaces[8] == player) || // Row 3
            (spaces[0] == player && spaces[3] == player && spaces[6] == player) || // Column 1
            (spaces[1] == player && spaces[4] == player && spaces[7] == player) || // Column 2
            (spaces[2] == player && spaces[5] == player && spaces[8] == player) || // Column 3
            (spaces[0] == player && spaces[4] == player && spaces[8] == player) || // Diagonal 1
            (spaces[2] == player && spaces[4] == player && spaces[6] == player));  // Diagonal 2
}

bool IsTie(char *spaces) {
    // Check if all spaces are filled
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false; // If any space is empty, it's not a tie
        }
    }
    return true; // All spaces are filled
}
