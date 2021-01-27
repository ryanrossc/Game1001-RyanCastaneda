// This program is a number guessing game
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Input user names

	string user1, user2;

	cout << " Player 1, what is your name?\n ";
	getline(cin, user1);
	cout << " Player 2, what is your name?\n ";
	getline(cin, user2);

	cout << " Hello " << user1 << " & " << user2 << ", Let's play a game! \n";

	// Generating random numbers

	float answer1, answer2;

	srand((unsigned)time(0));
	answer1 = (rand() % 100) + 1;
	answer2 = (rand() % 100) + 1;

	// Picking a starting player

	if (rand() % 2 == 1) {
		goto input1;
	}
	else {
		goto input2;
	}

	// Players input guesses

	float guess1, guess2;

input1:
	cout << "" << user1 << ", please guess your number. " << endl;
	cin >> guess1;

	if (guess1 == answer1) {
		cout << " Winner Winner Chicken Dinner!";
	}
	else if (guess1 < answer1) {
		cout << " Guess higher. \n";
		goto input2;
	}
	else (guess1 > answer1);
	cout << " Guess lower. \n" << endl;
	goto input2;

input2:
	cout << "" << user2 << ", please guess your number. " << endl;
	cin >> guess2;

	if (guess2 == answer2) {
		cout << " Winner Winner Chicken Dinner!";
	}
	else if (guess2 < answer2) {
		cout << " Guess higher. \n";
		goto input1;
	}
	else (guess2 > answer2);
	cout << " Guess lower. \n" << endl;
	goto input1;



}
		