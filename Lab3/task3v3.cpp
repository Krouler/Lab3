#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printDo(int n, int k);

//int main()
//{
//	printDo(20, 3);	//� ������� ��������� ���������� ���� � ������� continue, �� � ����� ������������� ������� ������ k=5? ��� 4? ����� ���
//	system("pause"); // ������������� �������� ��������� ������ ����. ����� ����� �� ������ � ��������������� �������, ������� ������������ � 
//}// �������� k.

void printDo(int n, int k) {
	int a[100];
	int buff = k;
	int i = 0;
	do {
		a[i] = i + 1;
		i++;
	} while (i < 100);
	i = 0;
	do{
		if (i%buff+1!= k) {
			cout << (a[i]) << " ";;
			buff++;
		
		}
		else { buff = 1; n += 1; }
		i++;
	} while (i < n);
}