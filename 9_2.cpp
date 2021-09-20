#include <iomanip> 
#include <stdlib.h> 
#include <ctime>
#include <iostream> 
#include<vector>
using namespace std;
int InputFun(unsigned int& n)
{
    cout << "Input size array:";
    cin >> n;
    return n;
}

void FillingMatrix(unsigned int& n, vector<vector<int> > &arr)
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
void OutPutFunct(unsigned int& n, vector<vector<int> > &arr)
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
void ResultFunction(unsigned int& n, vector<vector<int> > &arr)
{
    int stolbMin=0;
    int k = INT_MAX;
    for (int j = 0; j != n; j++)
    {
        for (int i = 0; i != n; i++)
        {
            if (arr[i][j] <= n)
            {
                for (int j = 0; j != n; j++)
                {
                    int pr = 1;
                    for (int i = 0; i != n; i++)
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
    for (int i = 0; i != n; i++)
        for (int j = 0; j != n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                num = i;
            }
        }
    int sum = 0;
    for (int i = 0; i != n; i++)
        for (int j = 0; j != n; j++)
        {
            if (i == num)
                sum += arr[i][j];
        }
    cout << "Amount = " << sum;
}
void CreateArrayPoiters(unsigned int& n)
{
    vector<vector<int> > arr;
    arr.resize(n);
    for (int i = 0; i < n; ++i)
    {
        arr[i].resize(n);
    }
    FillingMatrix(n, arr);
    OutPutFunct(n, arr);
    ResultFunction(n, arr);
}


int main()
{
    unsigned int n = 0;
    InputFun(n);
    CreateArrayPoiters(n);
    return 0;
}