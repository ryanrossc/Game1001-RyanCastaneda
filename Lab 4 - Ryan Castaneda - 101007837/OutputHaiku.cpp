// This program reads data from a file.
#include <iostream>
#include <fstream>         // Needed to use files
using namespace std;

int main()
{
	ofstream outputfile1;

	// Open the output file
	outputfile1.open("line1.txt");

	cout << "Now writing data to the file.\n\n";

	outputfile1 << "This is my moment, \n";
	outputfile1 << "I can see the finish line. \n";
	outputfile1 << "Is that a blue shell? \n";
	
	outputfile1.close();

	cout << "Done.\n\n";

	return 0;
}
