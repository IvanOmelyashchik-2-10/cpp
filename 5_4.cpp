#include<iostream>
#include<ctime>
using namespace std;
int InputFun(int& n)
{
	cout << "Input size matrix = ";
	cin >> n;
	return n;
}
void FillingMatrix(int &n, int **arr)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void fun(int &n, int** arr)
{
	cout << "Our matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
int FoundingMajorMinorFunction(int& n, int** arr, int &x)
{
	int   maxp;
	maxp = arr[0][0];
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
void OutputFunction(int& n, int **arr, int &x)
{
	cout << "Hight element be on string: ";
	for (int j = 0; j < n; j++)
	{
		cout << arr[x][j] << "\t";
	}
	cout << endl;
}
void OrtonomFunction(int& n, int** arr)
{
	cout << endl;
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
	isOrtonorm ? cout << "Matrix is orthanomic" : cout << "Matrix doesn't orthanomic"; 
}
void FillingEFunction(int& SizeE, int** arrE)
{
	for (int i = 0; i < SizeE; i++)
	{
		for (int j = 0; j < SizeE; j++)
		{
			if (i == j)
			{
				arrE[i][j] = 1;
			}
			else
			{
				arrE[i][j] = 0;
			}
		}
	}
}
void funE(int& SizeE, int** arrE)
{
	cout << "Our matrix:\n";
	for (int i = 0; i < SizeE; i++)
	{
		for (int j = 0; j < SizeE; j++)
		{
			cout << arrE[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

}
void OrtonomEFunction(int& SizeE, int** arrE)
{
	cout << endl;
	int sum = 0, sum1 = 0;
	bool isOrtonorm = true;
	for (int i = 0; i < SizeE - 1; i++)
	{
		for (int k = i; k < SizeE; k++)
		{
			if (k == i)
			{
				for (int j = 0; j < SizeE; j++)
				{
					sum1 += arrE[i][j] * arrE[k][j];
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
				for (int j = 0; j < SizeE; j++)
				{
					sum += (arrE[i][j] * arrE[k][j]);
				}
				if (sum != 0)
				{
					isOrtonorm = false;
					break;
				}
			}
		}
	}
	isOrtonorm ? cout << "Matrix is orthanomic" : cout << "Matrix doesn't orthanomic";
}
void AmountFunction(int &n, int ** arr, int **arrN, int ** arr2)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr2[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arrN[i][j] = arr[i][j] + arr2[i][j];
		}
	}
	
}
void OutputAmountFunction(int& n, int **arrN)
{
	cout << "Our matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arrN[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	
	int n = 0, x = 0;
	InputFun(n);
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	int** arrN = new  int* [n];
	for (int i = 0; i < n; ++i)
	{
		arrN[i] = new int[n];
	}
	int** arr2 = new  int* [n];
	for (int i = 0; i < n; ++i)
	{
		arr2[i] = new int[n];
	}
	FillingMatrix(n, arr);
	fun(n, arr);
	FoundingMajorMinorFunction(n, arr, x);
	OutputFunction(n, arr, x);
	OrtonomFunction(n,arr);
	for (int i = 0; i < n; i++)
	{
		delete [] arr[i];
	}
	delete[] arr;
	char Check;
	cout << "Do you want check algorithm of orthanomic?\n" << "y or n\n";
	cin >> Check;
	if (Check == 'y')
	{
		cout << "\n\n\t\t\t\t\t Chechking\n\n";
		int SizeE = 0;
		cout << "Input size identity matrix: ";
		cin >> SizeE;
		int** arrE = new int* [SizeE];
		for (int i = 0; i < SizeE; i++)
		{
			arrE[i] = new int[SizeE];
		}
		FillingEFunction(SizeE, arrE);
		funE(SizeE, arrE);
		OrtonomEFunction(SizeE, arrE);
		for (int i = 0; i < SizeE; i++)
		{
			delete[] arrE[i];
		}
		delete[] arrE;
	}
	else
	{
		cout << "Goodbuy :/";
	}
	AmountFunction(n, arr, arrN, arr2);
	OutputAmountFunction(n, arrN);
	for (int i = 0; i < n; i++)
	{
		delete[] arrN[i];
	}
	delete[] arrN;
	for (int i = 0; i < n; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;
	return 0;
}

