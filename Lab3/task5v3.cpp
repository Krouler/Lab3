#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int findFirstNegativeElementDo(double epsilon);

//int main() {
//	cout << findFirstNegativeElementDo(1000) << "\n";
//	system("pause");
//}

int findFirstNegativeElementDo(double epsilon) {
	double a = rand()%100-10;
	int i = 0;
	do {
		a = rand()%100-10;
		if (a < 0) { break; }
		i++;
	} while (a <= epsilon);
	return i;
}