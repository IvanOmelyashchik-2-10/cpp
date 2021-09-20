/////////////////////////////////////////////////////////3.1
//#include <iostream>
//#include <time.h>
//#include <stdlib.h>
//using namespace std;
//
//void InputFunArr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//}
//void OutputFunArr(int arr[], int n)
//{
//	cout << "Our array: ";
//	for (int i = 0; i < n; i++)
//	{
//		cout  << arr[i] << "\t";
//	}
//	cout << endl;
//}
//int FoundMax(int arr[], int n, int &y)
//{
//	int  max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			y = i; // номер максимального значения 
//		}
//		
//
//		
//	}
//	return y;
//}
//int FoundMin(int arr[], int n, int &x)
//{
//	int min = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//
//		if (min > arr[i])
//		{
//			min = arr[i];
//			x = i; ////Номер минимального значения
//		}
//
//
//	}
//	return  x;
//}
//	int Amount(int arr[],int &x, int &y, int &sum)
//	{
//		if (y > x)
//		{
//			for (int i = x; i <= y; i++)
//			{
//				sum += arr[i];
//			}
//		}
//		else
//		{
//			for (int i = y; i <= x; i++)
//			{
//				sum += arr[i];
//			}
//		}
//		return sum;
//	}
//	void OutputAmount(int &sum)
//	{
//		cout << "Result = " << sum;
//	}
//	int main()
//	{
//		srand((unsigned)time(NULL));
//		const int n = 5;
//		int arr[n],
//			x=0,
//			y=0,
//			sum = 0;
//		InputFunArr(arr, n);
//		OutputFunArr(arr, n);
//		FoundMax(arr, n, x);
//		FoundMin(arr, n, x);
//		Amount(arr, x, y, sum);
//		OutputAmount(sum);
//		return 0;
//	}

/////////////////////////////////////////////////////3.2
//#include <iostream>
//using namespace std;
//int const n = 5;
//void InputFunction(int arr[], int n)
//{
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout <<"N" << i + 1 << " = "; cin >> arr[i]; 
//	}
//}
//
//void OutpurResultFunction(int arr[], int n)
//{
//	cout << endl << "Our result:";
//	bool Check = true;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] == arr[j] && i != j)
//			{
//				Check = false;
//				break;
//			}
//		}
//		if (Check == true)
//		{
//			cout << arr[i] << "\t";
//		}
//		else
//		{
//			Check = true;
//		}
//		
//	}
//}
//int main()
//{
//	int arr[n];
//	InputFunction(arr, n);
//	OutpurResultFunction(arr, n);
//	return 0;
//}

///////////////////////////////////////////////////////////////3.3
#include<iostream>
using namespace std;
const int n = 5;
void InputFunction(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Input number" << i + 1 << "=";
		cin >> arr[i];
	}
	
}
void OutputResultFunction(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			cout << arr[i] << "  ";
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			cout << arr[i] << "  ";
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			cout << arr[i] << "  ";
	}
}
int main()
{
	
	int arr[n];
	InputFunction(arr, n);
	OutputResultFunction(arr, n);
	return 0;
}
