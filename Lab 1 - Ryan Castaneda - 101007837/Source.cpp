// A simple C++ Program
/*
Hi my name is Ryan
101007837
*/
#include <iostream>
using namespace std; // Use the standard namespace

// Main entry point to the application
int main()
{
	double n;
	
	cout << " The size of a bool: " << sizeof(bool) << " bytes.\n";
	cout << " The size of a char: " << sizeof(char) << " bytes.\n";
	cout << " The size of a short int: " << sizeof(short int) << " bytes.\n";
	cout << " The size of a float: " << sizeof(float) << " bytes.\n";
	cout << " The size of a integer: " << sizeof(int) << " bytes.\n";
	cout << " The size of a long int:" << sizeof(long int) << " bytes.\n";
	cout << " The size of a double: " << sizeof(double) << " bytes.\n";
	cout << " The size of a long long int: " << sizeof(long long int) << " bytes.\n";
	cout << " The size of a string: " << sizeof(string) << " bytes.\n";

	double first = 127,
		second = 27,
		third = 314,
		fourth = 420;

	cout << "Addition: " << first + fourth << endl;
	cout << "Subtraction: " << second - third << endl;
	cout << "Division: " << fourth / second << endl;
	cout << "Multiplication: " << third * first << endl;
	cout << "Modulus: " << (int)third % (int)fourth << endl; 


}