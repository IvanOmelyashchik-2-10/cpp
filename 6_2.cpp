#include <iostream>
#include <string>
#include<windows.h>

using namespace std;
unsigned const int m = 64;

struct Students
{
	int age, course;
	char sex, name[m];
	double mark;
};
void InputData(Students group[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "ФИО - ";
		cin.getline(group[i].name, m);
		cout << "Возраст - ";
		cin >> group[i].age;
		cin.get();
		cout << "Курс - ";
		cin >> group[i].course;
		cin.get();
		cout << "Пол - ";
		cin >> group[i].sex;
		cin.get();
		cout << "Успеваемость - ";
		cin >> group[i].mark;
		cin.get();
	}
}
void OutputData(Students group[], int n)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int i = 0; i < n; i++)
	{
		cout << group[i].name;
		cout << "\t" << group[i].age;
		cout << "\t" << group[i].course;
		cout << "\t" << group[i].sex;
		cout << "\t" << group[i].mark << endl << endl;

	}
}
void UnderperformingStudent(Students group[], int &n, int &CurrentCourse)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int i = 0; i < n; i++)
	{
		if (group[i].course == CurrentCourse and group[i].mark < 4)
		{
			
				cout << group[i].name <<" - "<< group[i].mark << endl;
			
		}
	}
	
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int CurrentCourse, l = 0, n;
	cout << "n = ";
	cin >> n;
	cin.get();
	Students* group = new Students[n];
	InputData(group, n);
	cout << endl << "ФИО " << "\tВозраст" << "\t Курс" << "\tПол" << "\tСредний балл" << endl;
	OutputData(group, n);
	cout << "What course are you interesting?"; 
	cin >> CurrentCourse;
	UnderperformingStudent(group, n, CurrentCourse);
	delete [] group;
	return 0;
}