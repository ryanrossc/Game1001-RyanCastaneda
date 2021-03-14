// This program reads data from a file.
#include <iostream>
#include <fstream>         // Needed to use files
#include <string>
using namespace std;

int main()
{
	ifstream inputfile1;
	string name;

	inputfile1.open("line1.txt");

	cout << "Reading data from the file.\n\n";
		
	getline(inputfile1, name);
	cout << name << endl;

	getline(inputfile1, name);
	cout << name << endl;

	getline(inputfile1, name);
	cout << name << endl;

	inputfile1.close();


	return 0;
}
