#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double findFirstElementWhile(double epsilon);


//int main()
//{
//	cout << findFirstElementWhile(75) << "\n";
//	system("pause");
//}

double findFirstElementWhile(double epsilon) {
	double a = 0.0000005; double buff = 0.0;
	buff += a;
	a *= 2;
	while (a <= epsilon) {
		buff += a;
		a *= 2;
	}
	return buff;
}