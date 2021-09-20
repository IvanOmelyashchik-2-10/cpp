#include<iostream>
#include<string>
using namespace std;

class word 
{
private:
    string Word;
public:
    void DB(string userString) 
    {
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


    }

    word() //конструктор без параметров
    {

    }
    word(string Word) //инициализации слова заданным словом - инициализатором
    {
        this->Word = Word;
    }
    word(int n, char Char) //инициализации слова заданным количеством повторов заданного символа
    {
        for (int i = 0; i < n; i++) 
        {
            Word += Char;
        }
    }
    word(string Word, int n) //инициализации слова частью заданного слова - инициализатора(первые n символов, последние n символов);
    {
        for (int i = 0; i < n; i++) 
        {
            this->Word += Word[i];
        }
        for (int i = n - 1; i >= Word.size() - n; i--) 
        {
            this->Word += Word[i];
        }
    }
    word(const word& object) //конструктор копировани€
    {
        for (int i = 0; i < object.Word.size(); i++) 
        {
            this->Word += object.Word[i];
        }
    }
    string get_word() 
    {
        return Word;
    }
    void add_ch(char c) 
    {
        Word += c;
    }
    void set_word(string valueword) 
    {
        Word = valueword;
    }
    ~word() 
    {
    }
};

int main()
{
    string Word;//инициализируем строку
    word dv;
    dv.DB(Word);
    cout << dv.get_word();
    return 0;
}