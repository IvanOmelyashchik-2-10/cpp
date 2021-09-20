#include <iostream>
#include <string>

using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string str;
    cout << "Input your string: ";
    cin >> str;
 
    for (size_t i = 0; i < str.size(); i++) 
    {
        for (size_t j = 0; j < alphabet.size(); j++) 
        {

            if (str[i] == alphabet[j]) 
            {
                string currentN = to_string(++j);
                str.replace(i, 1, currentN);
            }
        }
    }
    cout << "\nResult string: ";
    cout << str;
    cin.get();
    
    return 0;
}