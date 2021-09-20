//#include<iostream>
//using namespace std;
//
//
//float fun(float* a)
//{
//	int f = *a;
//	return f/10000 + f / 1000 % 100 + f / 100 % 10 + f / 10 % 10 + f % 10;
//}
//int main()
//{
//	float k;
//	cout << " k = ";
//	cin >> k;
//	cout << "Amount k = " << fun(&k);
//}
//
//Следущаюя задание

#include <iostream>
#include <cmath>
using namespace std;
int InputFun(int &n)
{
	cout << "Input n =";
	cin >> n;
	return n;
}
double fun(double &x,  double &sum, int &n)
{
	double product = 0.0;
	for (x = 0; x <= 3; x += 0.5)
	{
		for (int j = n; j != 0; j--)
		{
			product += pow((-1), j) * j * pow(x, j);
		}
		sum += product;
	}
	return sum;
}
void OutputFun(double &sum)
{
	cout << "Result = " << sum << endl;
}
int main()
{
	int n = 0;
	double x = 0.0, sum = 0.0;
	InputFun(n);
	fun(x, sum, n);
	OutputFun(sum);
	return 0;
}
	