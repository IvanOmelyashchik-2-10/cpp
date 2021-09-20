#include<iostream>
#include<ctime>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
void FillingFunction(int* arr, int& n)
{ 
	cout << "Filling array your hands:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
void OutputFunction(int* arr, int& n)
{
	cout << endl << "Firstly array:" << setw(4);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] <<  setw(6);
	}
}
void ResultFunction(int* arr, int *arrN, int& n)
{
	bool Check = true, Check2 = true;	
	int k = 0;
	cout << endl << "Result array:" << setw(5);
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				arrN[k] = arr[i];
				k++;
				break;
			}
		}
		

	}	
	for (int i = 0; i < k; ++i)
	{
		for (int j = i + 1; j < k; j++)
		{
			if (arrN[i] == arrN[j] and i != j)
			{
				swap(arrN[n- 1], arrN[j]);
				n--;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arrN[i] << setw(6);
	}
}
int main()
{
	cout << "Labatory 7_2#############" << endl;
	cout << "Input size of array:";
	int n = 0;
	cin >> n;
	int* arr = new int[n];
	int* arrN = new int[n];
	FillingFunction(arr, n);
	OutputFunction(arr, n);
	ResultFunction(arr,arrN, n);
	delete[] arr,arrN;
	return 0;
}
