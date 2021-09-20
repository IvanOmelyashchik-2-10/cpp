#include<iostream>
#include<algorithm>
#include<time.h>
#include<stdlib.h>
#include <conio.h>
using namespace std;
int InputSizeFunction(unsigned int &n)
{
	cout << "Input size of array:"; 
	cin >> n;
	return n;
}
void RandomFunction(int* arr, unsigned int& n)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 100;
	}
}
void IncreaseFunction(int* arr, unsigned int& n)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = i;
	}
}
void DecreaceFunction(int* arr, unsigned int& n)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = n - 1;
	}
}
void OutputFunction(int* arr, unsigned int& n)
{
	cout << "Our result:";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
}
void InsertFunction(int *arr, unsigned int &n, unsigned int &swaps, unsigned int & compare)
{
	for (int StartIndex = 0; StartIndex < n - 1; ++StartIndex)
	{
		int SmallestIndex = StartIndex;
		{
			for (int CurrentIndex = StartIndex + 1; CurrentIndex < n; ++CurrentIndex)
			{
				++compare;
				if (arr[CurrentIndex] < arr[SmallestIndex])
				{
					SmallestIndex = CurrentIndex;
				}

			}
			swap(arr[StartIndex], arr[SmallestIndex]);
			++swaps;
		}
	}
}
void BinaryInsert(int* arr, unsigned int& n, unsigned int& swaps, unsigned int& compare)
{
	unsigned int x,
				 left,
				 right,
				 sred;
	for (int i = 1; i < n; i++)
	{
		++compare;
		if (arr[i - 1] > arr[i])
		{
			x = arr[i];
			left = 0;
			right = i - 1;
			do
			{
				sred = (left + right) / 2;
				++compare;
				if (arr[sred] < x)
				{
					left = sred + 1;
				}
				else
				{
					right = sred - 1;
				}
				++compare;
			} while (left <= right);
			for (int j = i - 1; j >= left; j--)
			{
				arr[j + 1] = arr[j];
			}
			++swaps;
			arr[left] = x;
		}
	}
}
int main()
{
	unsigned int n = 0, swaps = 0,compare = 0, selection = 0;
	InputSizeFunction(n);
	int* arr = new int[n];
	srand((unsigned)time(NULL));
	cout << "1 - Filling random" << endl << "2 - Filling increase" << endl << "3 - Filling decrease" << endl;
	while (selection != '1' && selection != '2' && selection != '3') selection = _getch();
	switch (selection)
	{
	case '1':RandomFunction(arr, n); break;
	case '2':IncreaseFunction(arr, n); break;
	case '3':DecreaceFunction(arr, n); break;
	}
	OutputFunction(arr, n);
	cout << endl  << "1 - Sort insert" << endl << "2 - Sort binary insert" << endl;
	selection = 0;
	while (selection != '1' && selection != '2') selection = _getch();
	switch (selection)
	{
	case '1': InsertFunction(arr, n, swaps, compare); break;
	case '2': BinaryInsert(arr, n, swaps, compare); break;
	}
	OutputFunction(arr, n);
	cout << endl;
	cout << "Compare = " << compare << endl;
	cout << "Swap = " << swaps << endl;
	
	
	

	return 0;
}