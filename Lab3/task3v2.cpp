#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printWhile(int n, int k);

//int main()
//{
//	printWhile(20, 3);	//В задании требуется продолжать цикл с помощью continue, но а вдруг преподаватель захочет ввести k=5? Или 4? Тогда все
//	system("pause"); // фиксированные значения требуется менять тоже. Чтобы этого не делать я автоматизировал функцию, которая адаптируется к 
//}// значению k.

void printWhile(int n, int k) {
	int a[100];
	int buff = k;
	int i = 0;
	while( i < 100) {
		a[i] = i + 1;
		i++;
	}
	i = 0;
	while( i < n) {
		if (i%buff+1!= k) {
			cout << (a[i]) << " ";;
			buff++;
			
		}
		else { buff = 1; n += 1; }
		i++;
	}
}