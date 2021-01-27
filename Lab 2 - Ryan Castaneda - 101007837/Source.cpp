// Calculate sum, product, and average of user input numbers
#include <iostream>
using namespace std;

int main()
{
	
	double number1, number2, number3;
	float sum, product, average;

	cout << "The program calculates the sum, propuct, and average of three numbers. \n";

	// Ask input from user
	cout << "What is the value of number 1? \n";
	cin >> number1;
	cout << "What is the value of number 2? \n";
	cin >> number2;
	cout << "What is the value of number 3? \n";
	cin >> number3;

	sum = number1 + number2 + number3;
	cout << "The Sum is " << sum << endl;

	product = number1 * number2 * number3;
	cout << "The Product is " << product << endl;

	average = (number1 + number2 + number3) / 3;
	cout << "The Average is " << average << endl;

}




