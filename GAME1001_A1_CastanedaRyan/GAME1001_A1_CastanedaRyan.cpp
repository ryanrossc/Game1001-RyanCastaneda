#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

const string rps[4] = {" ", "rock", "paper", "scissors"};
const string ;

int main()
{
	ofstream oGameStats;
	ifstream iGameStats;
	string username;
	string dataname;
	
	char yes = 'Y';
	char no = 'N';
	
	int userinput,
		computerChoice,
		playerChoice;

	int playerPoints = 0,
		computerPoints = 0;
			
	srand(time(NULL));

	cout << "Hello user! What's your name? \n" << endl; // Greetings

	cin >> username;
	cout << " " << endl; // start new line

	cout << "Hi " << username << ", " << endl;

	cout << "Would you like to play Rock, Paper, Scissors? " << endl;
	cout << "Press Y for Yes.\n" << endl;
	cin >> yes;

	if (yes == 'y' || yes == 'Y')
	{
		cout << "\nWe will be playing best out of 3 rounds.\n" << endl;
		do
		{	
			computerChoice = 1 + rand() % 3;
			
			
			cout << "Press 1 for rock. \nPress 2 for paper. \nPress 3 for scissors. " << endl;
			cin >> playerChoice;

			if (computerChoice == playerChoice)                     
			{
				cout << "\nI picked " << rps[computerChoice] << ". We tied, lets go again!\n\n";
			}
			else if ((playerChoice == 1 && computerChoice == 2) || (playerChoice == 2 && computerChoice == 3) || (playerChoice == 3 && computerChoice == 1))
			{	cout << "\nI picked " << rps[computerChoice] << ", I won! " << rps[computerChoice] << " beats " << rps[playerChoice] << ".\n\n";
				
			computerPoints++;
			}                                                        
			else
			{
				cout << "\nI picked " << rps[computerChoice] << ", and you won! " << rps[playerChoice] << " beats " << rps[computerChoice] << ".\n\n";
				playerPoints++;
			}
		} while (playerPoints < 3 && computerPoints < 3);
	
	cout << "Your current score is " << playerPoints << " Wins! \n" << endl;
	cout << "My current score is " << computerPoints << " Wins ! \n" << endl;

	if (playerPoints < computerPoints)
		cout << "The computer wins! Better luck next time " << username <<"! \n\n" << endl;

	if (playerPoints > computerPoints)
		cout << "" << username << " Wins! I'll try harder next time... \n\n " << endl;

	cout << "Would you like to play again? [Y/N]" << endl;
	cin >> yes;

	}

	if (yes != 'y' || yes != 'Y')
		  
		cout << "Okay " << username << ", Would you like to save your stats?" << endl;
		cout << "Press Y for Yes or Press N for No. \n" << endl;
		cin >> yes;

	if (yes == 'y' || yes == 'Y')
		
		username += ".txt";
		oGameStats.open(username.c_str());
		
		if (!oGameStats) { 
			cout << "\nCould not create database\n";
		}
		else {
			cout << "\nYour game stats for " << username << " was loaded successfully\n";

			oGameStats << playerPoints;
			oGameStats << computerPoints;

			getline(iGameStats, username);
			cout << "Your wins:" << playerPoints << endl;

			getline(iGameStats, username);
			cout << "Computer wins:" << computerPoints << endl;

		}

		oGameStats.close();
			
		cout << "Okay " << username << ", Hope you have a great day!" << endl;
	
			
	return 0;
}

