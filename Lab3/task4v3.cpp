#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int findFirstElementDo(double epsilon);


//int main()
//{
//	cout << findFirstElementDo(75)<<"\n";
//	system("pause");
//}

int findFirstElementDo(double epsilon) {
	double a = 0.00005; double buff = 0.0;
	int i=0;
	do {
		buff += a;
		a *= 2;
		i++;
	} while (a <= epsilon);
	return i;
}