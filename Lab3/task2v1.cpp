#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double summ2For(double epsilon);

//int main()
//{
//	cout << summ2For(75) << "\n";
//	system("pause");
//}

double summ2For(double epsilon) {
	double a = 0.0000005;double buff = 0.0;
	for (; a <= epsilon;) {
		buff += a;
		a*=2;

	}
	return buff;
}