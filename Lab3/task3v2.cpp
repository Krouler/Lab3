#include "cmath"
#include "locale.h"
#include <stdio.h>
#include <iostream>

using namespace std;

void printWhile(int n, int k);

//int main()
//{
//	printWhile(20, 3);	//� ������� ��������� ���������� ���� � ������� continue, �� � ����� ������������� ������� ������ k=5? ��� 4? ����� ���
//	system("pause"); // ������������� �������� ��������� ������ ����. ����� ����� �� ������ � ��������������� �������, ������� ������������ � 
//}// �������� k.

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