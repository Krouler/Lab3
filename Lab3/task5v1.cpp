#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int findFirstNegativeElementFor(double epsilon);

//int main() {
//	cout << findFirstNegativeElementFor(1000) << "\n";
//	system("pause");
//}

int findFirstNegativeElementFor(double epsilon) {
	double a = rand() % 100 - 10; int smth;
	for (int i = 0; a <= epsilon;i++) {
		a = rand()%100-10;
		if (a < 0) { smth = i; break; }
	}
	return smth;
}