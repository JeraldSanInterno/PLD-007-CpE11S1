#include<iostream>
#include<ctime>

	void DrawBoard(char *spaces);
	void Player1Move(char *spaces, char player1);
	void Player2Move(char *spaces, char player2);
	void CheckWinner(char *spaces, char player1, char player2);
	void CheckTie(char *spaces);
	
	int main()
	{
		char spaces[9] = {'0','1','2','3','4','5','6','7','8'};
		char Player1 = 'X';
		char Player2 = 'O';
		bool running = true;
		return 0;
	} 
	void DrawBoard(char *spaces){
		std::cout << "    |    |    " <<'\n';
		std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  |  " << '\n';
		std::cout << "----|----|----" << '\n';
		std::cout << "    |    |    " << '\n';
		std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  |  " <<'\n';
		std::cout << "----|----|----" << '\n';
		std::cout << "    |    |    " << '\n';
		std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  |  " << '\n';
		std::cout << "    |    |    " << '\n';
	}
	void Player1Move(char *spaces, char player1);{
	}
	void Player2Move(char *spaces, char player2);{
	}
	bool CheckWinner(char *spaces, char player1, char player2);{
	return 0;
	}
	bool CheckTie(char *spaces),{
	return 0;
	}
