// this program calculates hours worked and overtime
#include <iostream>
using namespace std;

int main()
{
	double hourlyRate;
	double overtimeRate;
	double hoursWorked;
	double overtimeHours;
	double regularPay;
	double regularPay2;
	double overtimePay;
	double totalPay;

	cout << " What is your hourly rate? " << endl;
	cin >> hourlyRate;

	cout << " how many hours worked? " << endl;
	cin >> hoursWorked;

	if (hoursWorked > 40)
	{
		overtimeRate = hourlyRate * 1.5;
		overtimeHours = hoursWorked - 40;
		regularPay = hourlyRate * 40;

		cout << " Your regular pay is $" << regularPay << endl;

		overtimePay = overtimeRate * overtimeHours;
		cout << " Your overtime pay is $" << overtimePay << endl;

		totalPay = overtimePay + regularPay;
		cout << " The total pay is $" << totalPay << endl;
	}
	if (hoursWorked < 40)
	{
		regularPay2 = hourlyRate * hoursWorked;
		cout << " Regular pay is $" << regularPay2 << endl;

	}

}