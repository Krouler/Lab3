#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printFor(int n, int k);

//int main()
//{
//	printFor(20, 3);	//В задании требуется продолжать цикл с помощью continue, но а вдруг преподаватель захочет ввести k=5? Или 4? Тогда все
//	system("pause"); // фиксированные значения требуется менять тоже. Чтобы этого не делать я автоматизировал функцию, которая адаптируется к 
//}// значению k.

void printFor(int n, int k) {
	int a[100];
	int buff = k;
	for (int i = 0; i < 100; i++) {
		a[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		if (i%buff+1!= k) {
			cout << (a[i]) << " ";;
			buff++;
		}
		else { buff = 1; n += 1; }
	}
}