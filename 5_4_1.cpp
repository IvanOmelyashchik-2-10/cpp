#include <iostream>
#include <time.h>
#include <stdlib.h>    
#include <iomanip>
using namespace std;

const int n = 4;
void InputFunction(int arr[n][n])
{
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)

		{
			arr[i][j] = rand() % 100 - rand() % 100;
		}
}
void OutputFunction(int arr[n][n])
{
	cout << "Our Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << arr[i][j];
		cout << endl;
	}
}
int ResultFunction(int arr[n][n], int &x)
{
	int  maxp = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i][i] > maxp)
		{
			maxp = arr[i][i];
			x = i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[0 + i][n - 1 - i] > maxp)
		{
			maxp = arr[0 + i][n - 1 - i];
			x = i;
		}

	}
	return x;
}
void OutputResultFunction(int arr[n][n], int &x)
{ 
	cout << "Hight elemenet in matrix string:";
	for (int j = 0; j < n; j++)
	{
		cout << arr[x][j] << "\t";
	}
	cout << endl;
}
void OtronomFunction(int arr[n][n])
{
	int sum = 0, sum1 = 0;
	bool isOrtonorm = true;
	for (int i = 0; i < n - 1; i++)
	{
		for (int k = i; k < n; k++)
		{
			if (k == i)
			{
				for (int j = 0; j < n; j++)
				{
					sum1 += arr[i][j] * arr[k][j];
				}
				if (sum1 != 1)
				{
					isOrtonorm = false;
					break;
				}
				sum1 = 0;
			}
			else
			{
				for (int j = 0; j < n; j++)
				{
					sum += (arr[i][j] * arr[k][j]);
				}
				if (sum != 0)
				{
					isOrtonorm = false;
					break;
				}
			}
		}
	}
	isOrtonorm ? cout << "ortonorm" : cout << "not ortonotm";
}
	int main()
	{
		int arr[n][n], x = 0;
		srand((unsigned)time(NULL));
		InputFunction(arr);
		OutputFunction(arr);
		ResultFunction(arr, x);
		OutputResultFunction(arr, x);
		OtronomFunction(arr);
		return 0;
	}