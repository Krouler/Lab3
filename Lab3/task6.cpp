#include "task1v1.cpp"
#include "task1v2.cpp"
#include "task1v3.cpp"

#include "task2v1.cpp"
#include "task2v2.cpp"
#include "task2v3.cpp"

#include "task3v1.cpp"
#include "task3v2.cpp"
#include "task3v3.cpp"

#include "task4v1.cpp"
#include "task4v2.cpp"
#include "task4v3.cpp"

#include "task5v1.cpp"
#include "task5v2.cpp"
#include "task5v3.cpp"

using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int FirstAnswer;
	int SecondAnswer;
	cout << "�� ���, �������? �������� ����� ������(1-5) ���� �������� 6 ��� ������ �� ���������." << "\n";
	cin >> FirstAnswer;
	if (FirstAnswer == 6) { exit(0); return 0; }
	cout << "����� �������? For(1), While(2), DoWhile(3)?" << "\n";
	cin >> SecondAnswer;
	switch (FirstAnswer) {
	case 1:
	{	switch (SecondAnswer) {
	case 1: {int x; cout << "������� n: " << "\n"; cin >> x;
		cout << summFor(x) << "\n"; system("pause"); break; }
	case 2: {int x; cout << "������� n: " << "\n"; cin >> x;
		cout << summWhile(x) << "\n"; system("pause"); break; }
	case 3: {int x; cout << "������� n: " << "\n"; cin >> x;
	cout << summDo(x) << "\n"; break; system("pause"); } default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
	}
	break; }
	case 2:
	{	switch (SecondAnswer) {
	case 1: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << summ2For(epsilon) << "\n"; system("pause"); break; }
	case 2: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << summ2While(epsilon) << "\n"; system("pause"); break; }
	case 3: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << summ2Do(epsilon) << "\n"; system("pause"); break; }
	default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
	}
	break; }
	case 3:
	{	switch (SecondAnswer) {
	case 1: {int n; int k; cout << "������� n: " << "\n"; cin >> n; cout << "������� k: " << "\n"; cin >> k; printFor(n, k); system("pause"); break; }
	case 2: {int n; int k; cout << "������� n: " << "\n"; cin >> n; cout << "������� k: " << "\n"; cin >> k; printWhile(n, k); system("pause"); break; }
	case 3: {int n; int k; cout << "������� n: " << "\n"; cin >> n; cout << "������� k: " << "\n"; cin >> k; printDo(n, k); system("pause"); break; }
	default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
			 break;
	}
	case 4:
	{	switch (SecondAnswer) {
	case 1: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << findFirstElementFor(epsilon) << "\n"; system("pause"); break; }
	case 2: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << findFirstElementWhile(epsilon) << "\n"; system("pause"); break; }
	case 3: {int epsilon; cout << "������� epsilon: " << "\n"; cin >> epsilon; cout << findFirstElementDo(epsilon) << "\n"; system("pause"); break; }
	default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
	}

	break; }
	case 5:
	{	switch (SecondAnswer) {
	case 1: {cout << "����, ��������. ��� ������� ������ �� ����� �.�. ����� �����������(��. ��� task5v1.cpp)" << "\n"; cout << findFirstNegativeElementFor(1000) << "\n"; system("pause"); break; }
	case 2: {cout << "����, ��������. ��� ������� ������ �� ����� �.�. ����� �����������(��. ��� task5v2.cpp)" << "\n"; cout << findFirstNegativeElementWhile(1000) << "\n"; system("pause"); break; }
	case 3: {cout << "����, ��������. ��� ������� ������ �� ����� �.�. ����� �����������(��. ��� task5v3.cpp)" << "\n"; cout << findFirstNegativeElementDo(1000) << "\n"; system("pause"); break; }
	default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
	}

	break; }
	default: {cout << "��, ����� ������ �� ����������. ��������)" << "\n"; system("pause"); exit(0); return 0; }
	}

	
	return 0;
	}
}