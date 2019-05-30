#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double summDo(int n);

//int main() {
//	setlocale(LC_ALL, "Russian");
//	cout << summDo(10) << "\n";
//	system("pause");
//}

double summDo(int n)
{
	double GovnoUslovie, perem=0.0;
	int i = 0;
	do {
		GovnoUslovie = rand() % 20;
		perem += GovnoUslovie;
		i++;
	} while (i < n);

	return perem;
}
