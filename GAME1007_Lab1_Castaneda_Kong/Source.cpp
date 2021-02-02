// This program is a number guessing game
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Input user names

	const int GAME_LIMIT = 20; // Players need to guess in 20 times.
	string user1, user2;

	int gameContinue = 0;
	int currentUser;
	int gameTurnCount = 0;
	int answer;
	// For saving user answers
	int guess1;
	int guess2;
	// to end game, we need varriable
	bool bGameEnd = false;
	// for int game
	bool bIsGameInit = false;

	// User names
	cout << " Player 1, what is your name? ";
	getline(cin, user1);
	cout << " Player 2, what is your name? ";
	getline(cin, user2);
	cout << " Hello " << user1 << " & " << user2 << ", Let's play a game! \n\n\n";

	while (!bGameEnd)  // If the game didn't end, goes in
	{
		if (!bIsGameInit) // if game is not int
		{
			// Choosing first player by random.
			// It will be 0~1. So 0 is User1's turn and 1 is User2's turn.
			currentUser = (rand() % 2);
			if (currentUser == 0)
			{
				cout << user1 << " is the first player!!\n\n" << endl;
			}
			else if (currentUser == 1)
			{
				cout << user2 << " is the first player!!\n\n" << endl;
			}

			// guessing number between 1~100
			srand((unsigned)time(0));
			answer = (rand() % 100) + 1;

			bIsGameInit = true; // Initializing is done.
			gameTurnCount = 0;
			gameContinue = 0;
		}

		// if currentuser is user1, goes in
		if (currentUser == 0)
		{
			cout << "=====================================================" << endl;
			cout << "" << user1 << ", please guess your number : ";
			cin >> guess1;

			if (guess1 > answer)
			{
				cout << "It's higher than answer.\n\n";
			}
			else if (guess1 < answer)
			{
				cout << "It's lower than answer\n\n";
			}
			else // If guess and answer are same
			{
				cout << "Winner is " << user1 << endl;

				bGameEnd = true; // game end
			}
			currentUser = 1; // We need to change user to user2
		}
		else if (currentUser == 1) // if currentUser is User2, goes in
		{
			cout << "=====================================================" << endl;
			cout << "" << user2 << ", please guess your number :";
			cin >> guess2;

			if (guess2 > answer)
			{
				cout << "It's higher than answer.\n\n";
			}
			else if (guess2 < answer)
			{
				cout << "It's lower than answer.\n\n";
			}
			else // If guess and answer are same
			{
				cout << "Winner is " << user2 << endl;

				bGameEnd = true; // game end
			}
			currentUser = 0; // We need to change user2 to user1
		}

		// game turn count
		gameTurnCount++;
		cout << "GameTurn remains -------------- [ " << GAME_LIMIT - gameTurnCount << "]" << endl;
		if (gameTurnCount == 20)
		{
			cout << "=====================================================" << endl;
			cout << "GameTurn is all over" << endl;
			cout << " Answer is " << "[" << answer << "]" << endl;
			cout << user1 << "'s answer is [" << guess1 << "]" << endl;
			cout << user2 << "'s answer is [" << guess2 << "]" << endl;
			if (abs(answer - guess1) < abs(answer - guess2))
				cout << "Winner is " << user1 << "!!\n\n\n" << endl;
			else
				cout << "Winner is " << user2 << "!!\n\n\n" << endl;
			bGameEnd = true; // game ends
		}

		if (bGameEnd) // If game ends.
		{
			while (gameContinue != 1 && gameContinue != 2)
			{
				cout << "====================================" << endl;
				cout << "Do you want to play game one more???" << endl;
				cout << "===========" << endl;
				cout << "1. Yes" << endl;
				cout << "2. No" << endl;
				cout << "===========" << endl;
				cout << "Type number Please : ";
				cin >> gameContinue;
				if (gameContinue == 1) // If Yes
				{
					// for initializing
					bGameEnd = false;
					bIsGameInit = false;
				}
				else if (gameContinue != 1 && gameContinue != 2)
					cout << "\n\n\n\n\n\nYou typed wrong number." << endl;
			}
		}
	}
}