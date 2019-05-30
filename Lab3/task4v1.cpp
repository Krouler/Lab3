#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int findFirstElementFor(double epsilon);


//int main()
//{
//	cout << findFirstElementFor(75)<<"\n";
//	system("pause");
//}

int findFirstElementFor(double epsilon) {
	double a = 0.00005; double buff = 0.0;
	int smth;
	for (int i = 0; a <= epsilon; i++) {
		buff += a;
		a *= 2;
		smth++;
	}
	
	return smth;
}