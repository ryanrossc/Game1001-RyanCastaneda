// This is used to convert temp.
#include <iostream>
using namespace std;


double celsius(double i)
{
	double c;
	
	c = 5.0 / 9.0 * (i - 32.0);

	cout << c << " celsius\n\n"<<endl;

	return 0;
}

int main()
{
	for (int i = -20; i < 101; i++)
	{	
		cout << i<< " Fahrenheit is equal to" << endl;
		celsius(i);
	}



	return 0;
}