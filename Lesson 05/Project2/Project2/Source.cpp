#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	/*cout << (a > 0 && a <= 100 ? "a ������ � �������� �� 0 �� 100" : "��� ���������") << endl;
	cout << (a > 100 || a == -10 ? "a ������ 100 ��� ����� -10" : "a ������ 101") << endl;

	cout << (a > b && b > 20 ? "> 20" : "a < b") << endl;

	cout << ((a >= 0 && a <= 10) || (b >= 100 && b <= 500) ? "a (0..10) b (100..500)" : "��� ���������") << endl;
	*/

	//if/else if/else 
	if (a >= 0 && a <= 100) {
		cout << "a ������ � �������� �� 0 �� 100" << endl;
	}
	/*else {	
		cout << "��� ���������" << endl;
	}*/

	if ((a >= 0 && a <= 10) || (b >= 100 && b <= 500)) {
		cout << "a = (0..10) || b = (100..500)" << endl;
	}
	else {
		cout << "����� ��� �������� ���������" << endl;
	}

	/*
		1. if ����� ������������ ��� �� ����
		2. else if, �� ����� ������������ ��� if, � ��� �� ����� ���� ����������� � ����������� �������������� ���-�� ���
		3. else, �� ����� ��������� �������. ����������� ������ � ����� �����������. �������� �� ������������
	*/

	/*if (a > 0) {
		cout << "a > 0" << endl;
	}
	else if (a < 0) {
		cout << "a < 0" << endl;
	}
	else {
		cout << "a = 0" << endl;
	}*/

	if (a > 0) {
		cout << "a > 0" << endl;
	}
	else {
		cout << "a <= 0" << endl;
	}

	if (a > 0) {
		cout << "a > 0" << endl;
	}
	else if (a <= 0) {
		cout << "a <= 0" << endl;
	}
	



	return 0;
}