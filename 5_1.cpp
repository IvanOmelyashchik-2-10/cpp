#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14;
double OurFunction(double *a)
{
	double Result = sin(log(*a) + sin(*a) * pi * *a) * pow((*a * *a + sin(*a) + exp(cos(*a))), 1 / 4);
	return Result;
}
int main()
{
	double x = 0.0;
	cout << "Input x:";
	cin >> x;
	cout << endl << "Result = " << OurFunction(&x);
	return 0;
}



