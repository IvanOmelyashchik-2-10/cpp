#include <iomanip> 
#include <stdlib.h> 
#include <ctime>
#include <iostream> 
using namespace std;
int InputFun(unsigned int& n)
{

	cout << "Input  size =\t";
	cin >> n;
	
	return n;
}
//1
void FillingMatrix1(unsigned int& n, int * arr1)
{
    srand(time(NULL));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            arr1[i*n + j] = rand() % 10;
        }
    }
}
void OutPutFunct1(unsigned int& n, int* arr1)
{
    cout << "\nMatrix:\n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i*n+j] << setw(4) << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void ResultFunction1(unsigned int& n, int* arr1)
{
    int stolbMin;
    int k = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr1[i*n +j] <= n)
            {
                for (int j = 0; j < n; j++)
                {
                    int pr = 1;
                    for (int i = 0; i < n; i++)
                        pr *= arr1[i*n+j];
                    if (pr < k)
                    {
                        k = pr;
                        stolbMin = j;
                    }
                }
            }
            else break;

        }
    }
    cout << "Column witn minimul product elements : " << stolbMin + 1 << endl;
    int max = arr1[0];
    int num = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (max < arr1[i*n+j])
            {
                max = arr1[i*n+j];
                num = i;
            }
        }
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == num)
                sum += arr1[i*n+j];
        }
    cout << "Amount = " << sum;
}
void CreateArrayPoiters1(unsigned int& n)
{
    int* arr1 = new int [n*n];
    
    FillingMatrix1(n, arr1);
    OutPutFunct1(n, arr1);
    ResultFunction1(n, arr1);
}
//2
void FillingMatrix(unsigned int& n, int** arr)
{
    srand(time(NULL));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            arr[i][j] = rand() % 10;
        }
    }
}
void OutPutFunct(unsigned int& n, int** arr)
{
	cout << "\nMatrix:\n\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << setw(4) << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void ResultFunction(unsigned int& n, int** arr)
{
    int stolbMin;
    int k = INT_MAX;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] <= n)
            {
                for (int j = 0; j < n; j++)
                {
                    int pr = 1;
                    for (int i = 0; i < n; i++)
                        pr *= arr[i][j];
                    if (pr < k)
                    {
                        k = pr;
                        stolbMin = j;
                    }
                }
            }
            else break;
           
        }
    }
    cout << "Column witn minimul product elements : " << stolbMin + 1 << endl;
    int max = arr[0][0];
    int num = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                num = i;
            }
        }
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == num)
                sum += arr[i][j];
        }
    cout << "Amount = " << sum;
}
void CreateArrayPoiters(unsigned int& n)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	FillingMatrix( n, arr);
	OutPutFunct(n, arr);
    ResultFunction(n, arr);
}


int main()
{
	unsigned int n = 0;
	InputFun(n);
	CreateArrayPoiters(n);
    CreateArrayPoiters1(n);
    return 0;
}