#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int findFirstNegativeElementWhile(double epsilon);

//int main() {
//	cout << findFirstNegativeElementWhile(1000) << "\n";
//	system("pause");
//}

int findFirstNegativeElementWhile(double epsilon) {
	double a = rand()%100-10;
	int i = 0;
	a = rand() % 100 - 10;
	while (a <= epsilon) {
		if (a < 0) { break; }
		a = rand()%100-10;
		i++;
	}
	return i;
}