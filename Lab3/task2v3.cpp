#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double summ2Do(double epsilon);

//int main()
//{
//	cout << summ2Do(75) << "\n";
//	system("pause");
//}

double summ2Do(double epsilon) {
	double a = 0.0000005;double buff = 0.0;
	do {
		buff += a;
		a*=2;

	} while (a <= epsilon);
	return buff;
}