#include <iostream>
#include <vector>

#include "Main.h"
using namespace std;

int main()
{
	const int SIZE = 10;
	int number[SIZE];
	int counter; // my loop counter
	int avg; // average

	// innput array
	cout << "Please input 10 numbers below. \n" << endl;

	for (counter = 0; counter < SIZE; counter++)
	{
		cin >> number[counter];
	}

	// find the average
	avg = (number[0] + number[1] + number[2] + number[3] + number[4] + number[5] + number[6] + number[7] + number[8] + number[9]) / 10;

	cout << "\n The average of the number input is " << avg << endl;

	// create two vectors
	vector<int> value1;
	vector<int> value2;

	// vector array for loop 
	for (int counter = 0; counter < SIZE; counter++)
	{
		if (number[counter] > avg)
		{
			value1.push_back(number[counter]);
		}
		else
		{
			value2.push_back(number[counter]);
		}
	}

	// displaying values
	cout << value1[1] << endl;
	cout << value2[1] << endl;

	// I know what I wrote here is inccorect.
	// Whenever I put my loop counter in [] it gives me this message.

	// An invalid parameter was passed to a function that considers invalid parameters fatal.
	// I tried searching for an answer but found none.

	return 0;
}