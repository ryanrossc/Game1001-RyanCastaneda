//  items sold for last week and calculates and displays that salesperson’s earnings.
#include <iostream>
using namespace std;

int main()
{
	cout << " This calculates commissons for the items below." << endl;

	cout << "=============================== " << endl;
	cout << " Item 1 (299.99) " << endl;
	cout << " Item 2 (89.75) " << endl;
	cout << " Item 3 (189.95) " << endl;
	cout << " Item 4 (150.89) " << endl;
	cout << " Item 5 (429.45) " << endl;
	cout << "=============================== " << endl;

	float unit1, unit2, unit3, unit4, unit5;

	cout << " How many units of Item 1 (299.99) was sold? " ;
	cin >> unit1;
	cout << " How many units of Item 2 (89.75) was sold? ";
	cin >> unit2; 
	cout << " How many units of Item 3 (189.95) was sold? ";
	cin >> unit3;
	cout << " How many units of Item 4 (150.89) was sold? ";
	cin >> unit4; 
	cout << " How many units of Item 5 (429.45) was sold? ";
	cin >> unit5;
	cout << "=============================== " << endl;

	float item1, item2, item3, item4, item5, total, commission;

	item1 = 299.99 * unit1;
	item2 = 89.75 * unit2;
	item3 = 189.95 * unit3;
	item4 = 150.89 * unit4;
	item5 = 429.45 * unit5;
	total = item1 + item2 + item3 + item4 + item5;
	commission = (total * 0.09) + 200;

	cout << "=============================== " << endl;
	cout << " Your total pay for the week is: $" << commission << endl;
	cout << "=============================== " << endl;

	return 0;
}

