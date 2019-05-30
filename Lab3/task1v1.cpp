#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double summFor(int n);
//int main() {
//	setlocale(LC_ALL, "Russian");
//	cout << summFor(10) << "\n";
//	system("pause");
//}

double summFor(int n)
{
	double GovnoUslovie, perem=0.0;
	for (int i=0; i < n; i++) {
		GovnoUslovie = rand() % 20;
		perem += GovnoUslovie;
	}

	return perem;
}
