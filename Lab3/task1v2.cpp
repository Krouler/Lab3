#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

double summWhile(int n);

//int main() {
//	setlocale(LC_ALL, "Russian");
//cout << summWhile(10) << "\n";
//system("pause");
//}

double summWhile(int n)
{
	double GovnoUslovie, perem=0.0;
	int i = 0;
	while(i < n) {
		GovnoUslovie = rand() % 20;
		perem += GovnoUslovie;
		i++;
	}

	return perem;
}
