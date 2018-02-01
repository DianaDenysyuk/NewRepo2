#include<iostream>
using namespace std;
int Menu();
double MoneyChangeUAH(double x, const double y, int);

int main()
{
	int num = Menu();
	double x;
	const double y = 27.532;
	cout << "enter how much money you want change = ";
	cin >> x;
	cout << "You have " << MoneyChangeUAH(x, y, num) << " ..." << endl;
}

int Menu()
{
	int num;
	cout << "Enter menu case:" << endl;
	cout << "1. UAH -> USD" << endl;
	cout << "2. USD -> UAH" << endl;
	cin >> num;
	return num;
}

double MoneyChangeUAH(double x, const double y, int num)
{
	switch (num)
	{
	case 1:
	{
		return x / y;
		break;
	}
	case 2:
	{
		return x * y;
		break;
	}
	default:
	{
		cout << "Error!" << endl;
		break;
	}
	}
}