#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <stdlib.h>
using namespace std;

void FillingFirst(ofstream &FirstFile, int n)
{ 

	srand((unsigned)time(NULL));
	int msg;
	bool Check = true;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (k == 10)
		{
			k = 0;
			if (Check == true)
			{
				Check = false;
			}
			else
			{
				Check = true;
			}

		}
		if (Check == true)
		{
			msg = 1 + rand() % 100 ;
			FirstFile << msg << "\t";
		}
		else
		{
			msg = (1 + rand()) % 100 * (-1);
			FirstFile << msg << "\t";	
		}
		k++;
	}
}
void CensusFile(ifstream& InFirstFile, ofstream& SecondFile, int n)
{
	int* arr = new  int[n];
	int CurrentNumber, it = 0;
	for (InFirstFile >> CurrentNumber; !InFirstFile.eof(); InFirstFile >> CurrentNumber)
	{
		arr[it] = CurrentNumber;
		it++;
		
	}
	for (int i = 0; i < n ; ++i)
	{
		cout << arr[i] << endl;
	}
	int msg;
	bool Check = true;
	int i = 0;
	int counter = 1;
	int k = 0;
	int savepol = 0;
	int saveotr = 10;
	cout << "вывод массива" << endl;
	int d = 0;
	while (d < n)
	{
		while (k < 20)
		{

			if (arr[i] > 0)
			{
				if (k == 0)
				{
					i = savepol;
				}
				
				k++;
				counter++;
			}
			i++;
			d++;

		}
		savepol = i;
		k = 0;
		while (k < 20)
		{

			if (arr[i] < 0)
			{
				if (k == 0)
				{
					i = saveotr;
				}
				SecondFile << arr[i] << "\t";
				k++;
				counter++;

			}
			if (k % 10 == 0)
			{

			}
			i++;
			d++;
		}
		saveotr = i;
		k = 0;


	}

}

int main()
{
	unsigned int n;
	
	cout << "Input maximum numbers in first file(minimun 40 numbers)\n" << "n = ";
	cin >> n;
	/*string FirstPath = "MyFirstFile.txt";
	string Secondpath = "MySecondFile.txt";

	ofstream FirstFile, SecondFile;
	ifstream InFirstFile;
	FirstFile.open(FirstPath);
	if (!FirstFile.is_open())
	{
		cout << " Error opening file...." << endl;
	}
	else
	{
		cout << "File open!" << endl;
		FillingFirst(FirstFile, n);
		FirstFile.close();
		SecondFile.open(Secondpath);
		if (!SecondFile.is_open())
		{
			cout << " Error opening file...." << endl;	
		}
		else
		{
			InFirstFile.open(FirstPath);
			if (!InFirstFile.is_open())
			{
				cout << " Error opening file...." << endl;
			}
			else
			{
				cout << "File open!" << endl;
				CensusFile(InFirstFile, SecondFile, n);
				InFirstFile.close();
				SecondFile.close();
			}
			
		}
		

	}*/
	string FirstPath = "MyBinFirstFile.bin";
	string Secondpath = "MyBinSecondFile.bin";

	ofstream FirstFile, SecondFile;
	ifstream InFirstFile;
	FirstFile.open(FirstPath, ios::binary);
	if (!FirstFile.is_open())
	{
		cout << " Error opening file...." << endl;
	}
	else
	{
		cout << "File open!" << endl;
		FillingFirst(FirstFile, n);
		FirstFile.close();
		SecondFile.open(Secondpath, ios::binary);
		if (!SecondFile.is_open())
		{
			cout << " Error opening file...." << endl;
		}
		else
		{
			InFirstFile.open(FirstPath, ios::binary);
			if (!InFirstFile.is_open())
			{
				cout << " Error opening file...." << endl;
			}
			else
			{
				cout << "File open!" << endl;
				CensusFile(InFirstFile, SecondFile, n);
				InFirstFile.close();
				SecondFile.close();
			}

		}


	}
	
	
	
	return 0;
}