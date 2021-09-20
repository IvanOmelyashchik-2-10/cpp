/////////4.1
#include<iostream>
#include<string.h>
#include<string>
#include<windows.h>
using namespace std;
void InputFunction(string &arr)
{
	cout << "Введите вашу строку\n";
	getline(cin, arr, '$');
}
void OutputFunction(string &arr)
{
	int max = arr.length();
	for (int i = 0; i < max - 1; i++)
	{
		for (int j = i + 1; j < max - 1; j++)
		{
			if (arr[i] == arr[j])
			{
				arr.erase(j, 1);
				max--;
			}
		}
	}
	cout << arr;
	cout << endl;
}
void VowelsFunction(string &arr1,string &arr)
{
	string vowels = { 'а','е','ё','и','о','у','ы','э','ю','я' };
	int max1 = arr1.length();
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < max1; j++)
		{
			if (arr1[j] == vowels[i])
			{
				cout << arr[j] << "\t";
			}
		}
	}
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string arr, arr1;
	InputFunction(arr);
	OutputFunction(arr);
	arr1 = arr;	
	VowelsFunction(arr1, arr);

	
	
}
/////////////////////////////////////////////////////4.2

//
///////////////////////4.3

//#include<iostream>
//#include<cmath>
//#include <bitset>
//using namespace std;
//double InputFunction(double &number)
//{
//	cout << "Input number:";
//	cin >> number;
//	return number;
//}
//void ResultFunction(double &number)
//{
//	cout << "Numbers palindrome:" << endl;
//	for (int i = 0; i < number; i++)
//	{
//		string bin = bitset<8>(i).to_string();
//		string old_bin = bin;
//		reverse(bin.begin(), bin.end());
//		if (bin == old_bin)
//		{
//			cout << i <<"===="<< bin << endl;
//		}
//	}
//}
//int main()
//{
//	double number = 0.0;
//	InputFunction(number);
//	ResultFunction(number);
//
//	return 0;
//}
