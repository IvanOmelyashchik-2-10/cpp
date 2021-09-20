#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void FillingFunction(int &n, vector <int>&arr)
{
    cout << "\nFilling your array:\n";
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
}
void ResultFunction(vector<int>&arr)
{
    unordered_map<int, int> um;
    for (auto x : arr)
        ++um[x];
    for (auto& i : um)
        if (i.second > 1)
            cout << i.first << " ";
}
int main()
{
    cout << "Input size of array:";
    int n;
    cin >> n;
    vector<int> arr;
    FillingFunction(n, arr);
    ResultFunction(arr);
   
}