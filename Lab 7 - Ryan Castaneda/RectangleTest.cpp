#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	// define 2 rectangle objects
	Rectangle box;
	double inputWidth, inputLength;

	cout << "This will calculate area and perimeter of a rectangle.\n\n";

	cout << "What is the width of the rectangle?" << endl;
	cin >> inputWidth;
	cout << "\nWhat is the length of the rectangle?" << endl;
	cin >> inputLength;

	if (!box.setWidth(inputWidth))
	{
		cout << "Invalid width.\n";
	}
	else if (!box.setLength(inputLength))
	{
		cout << "Invalid length.\n";
	}
	else
	{
		cout << "\nHere is the rectangle date:\n";
		cout << "Length:   " << box.getLength() << endl;
		cout << "Width :   " << box.getWidth() << endl;
		cout << "Area  :   " << box.getArea() << endl;
		cout << "Perimeter:" << box.getPerimeter() << endl;
	}

	return 0;
}