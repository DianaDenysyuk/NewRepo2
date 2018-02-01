#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void Fill(int array[][10], const int row, const int col);
void Show(int array[][10], const int row, const int col);
void Num(int array[][10], const int row, const int col, int num);

void main()
{
	srand(time(0));
	int num;
	cin >> num;
	const int row = 10;
	const int col = 10;
	int array[row][10] = {};
	Fill(array, row, 5);
	Show(array, row, 5);
	Num(array, row, 5, num);
}

void Fill(int array[][10], const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
		array[i][j] = rand() % 100 - 50;
		}
	}
}

void Show(int array[][10], const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << setw(5) << array[i][j];
		}
		cout << endl;
	}

}
void Num(int array[][10], const int row, const int col, int num)
{
	
		for (int j = 0; j < col; j++)
		{
			cout << setw(5) << array[num][j];
		}
		cout << endl;
}