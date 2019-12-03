#include <iostream>

char position[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
int results();

void print_board()
{
	system("cls");
	std::cout << "\n\nWelcome to C++ Tic Tac Toe" << std::endl;
	std::cout << "\n\nPLAYER 1 is (X)\tPLAYER 2 is (O)\n\n" << std::endl;

	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << position[0][0] << "  |  " << position[0][1] << "  |  " << position[0][2] << std::endl;
	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << position[1][0] << "  |  " << position[1][1] << "  |  " << position[1][2] << std::endl;
	std::cout << "_____|_____|_____" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  " << position[2][0] << "  |  " << position[2][1] << "  |  " << position[2][2] << std::endl;
	std::cout << "     |     |     " << std::endl;
}

void player_turn()
{
	char markX = 'X';
	char markO = 'O';
	int playerId = 1;
	int choice = 0;
	int x = -1;

	while (x == -1)
	{
		if (playerId == 1) {
			std::cout << "\n\nPlayer1 is X, enter number for position on the board: ";
			std::cin >> choice;
		}
		else if (playerId == 2) {
			std::cout << "\n\nPlayer2 is O, enter number for position on the board: ";
			std::cin >> choice;
		}

		if (choice == 1 && position[0][0] == '1') {
			if (playerId == 1) {
				position[0][0] = markX;
				playerId++;
			}
			else {
				position[0][0] = markO;
				playerId--;
			}
		}
		else if (choice == 2 && position[0][1] == '2') {
			if (playerId == 1) {
				position[0][1] = markX;
				playerId++;
			}
			else {
				position[0][1] = markO;
				playerId--;
			}
		}
		else if (choice == 3 && position[0][2] == '3') {
			if (playerId == 1) {
				position[0][2] = markX;
				playerId++;
			}
			else {
				position[0][2] = markO;
				playerId--;
			}
		}
		else if (choice == 4 && position[1][0] == '4') {
			if (playerId == 1) {
				position[1][0] = markX;
				playerId++;
			}
			else {
				position[1][0] = markO;
				playerId--;
			}
		}
		else if (choice == 5 && position[1][1] == '5') {
			if (playerId == 1) {
				position[1][1] = markX;
				playerId++;
			}
			else {
				position[1][1] = markO;
				playerId--;
			}
		}
		else if (choice == 6 && position[1][2] == '6') {
			if (playerId == 1) {
				position[1][2] = markX;
				playerId++;
			}
			else {
				position[1][2] = markO;
				playerId--;
			}
		}
		else if (choice == 7 && position[2][0] == '7') {
			if (playerId == 1) {
				position[2][0] = markX;
				playerId++;
			}
			else {
				position[2][0] = markO;
				playerId--;
			}
		}
		else if (choice == 8 && position[2][1] == '8') {
			if (playerId == 1) {
				position[2][1] = markX;
				playerId++;
			}
			else {
				position[2][1] = markO;
				playerId--;
			}
		}
		else if (choice == 9 && position[2][2] == '9') {
			if (playerId == 1) {
				position[2][2] = markX;
				playerId++;
			}
			else {
				position[2][2] = markO;
				playerId--;
				std::cin.ignore();
				std::cin.get();
			}
		}
		else {
			std::cout << "\n\nINVALID CHOICE" << std::endl;
		}

		print_board();
		x = results();
		continue;
	}
	if (x == 1) {
		std::cout << "Player " << --playerId << " Winner" << std::endl;
		std::cout << "GAME OVER" << std::endl;
	}
	else {
		std::cout << "Cats Game! GAME OVER" << std::endl;
	}
}

int results()
{
	if (position[0][0] == position[0][1] && position[0][1] == position[0][2])
		return 1;
	else if (position[1][0] == position[1][1] && position[1][1] == position[1][2])
		return 1;
	else if (position[2][0] == position[2][1] && position[2][1] == position[2][2])
		return 1;
	else if (position[0][0] == position[1][0] && position[1][0] == position[2][0])
		return 1;
	else if (position[0][1] == position[1][1] && position[1][1] == position[2][1])
		return 1;
	else if (position[0][2] == position[1][2] && position[1][2] == position[2][2])
		return 1;
	else if (position[0][0] == position[1][1] && position[1][1] == position[2][2])
		return 1;
	else if (position[0][2] == position[1][1] && position[1][1] == position[2][0])
		return 1;
	else if (position[0][0] != '1' && position[0][1] != '2' && position[0][2] != '3' && position[1][0] != '4' &&
		position[1][1] != '5' && position[1][2] != '6' && position[2][0] != '7' && position[2][1] != '8' && position[2][2] != '9')
		return 0;
	else
		return -1;
}

int main()
{
	print_board();
	player_turn();
	results();

	return 0;
}