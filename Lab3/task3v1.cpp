#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printFor(int n, int k);

//int main()
//{
//	printFor(20, 3);	//� ������� ��������� ���������� ���� � ������� continue, �� � ����� ������������� ������� ������ k=5? ��� 4? ����� ���
//	system("pause"); // ������������� �������� ��������� ������ ����. ����� ����� �� ������ � ��������������� �������, ������� ������������ � 
//}// �������� k.

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