#include <iostream>

using namespace std;

int main() {
	//����������� �������� �����
	setlocale(LC_ALL, "rus");

	//���������� ������������� ����������
	/*int a = 0, b = 10;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a = " << a << " b = " << b << endl;

	char symb = 'B';
	cout << "Symb = " << symb << endl;*/

	//bool s = true;

	//���������� ����������
	/*int a = 5, b = 9, c = 0;
	//���������� ����� �����
	c = a + b;

	//����� ���������� �� �����
	cout << "c = " << c << endl;

	int d = 10, k = 78;

	c = c + d + k;

	cout << c << endl;

	cout << d << endl;*/

	/*double a = 10.7, b = 0.65, c = 0;
	c = a + b;

	cout << c << endl;*/

	/*const double PI = 3.14;
	cout << PI << endl;


	//PI = 100.65;		//���������
	cout << PI << endl;*/


	/*
		-= ������� ���������� ���������� =-

		abc
		_abc
		abc1
		abc_1
		ABC
		abc_abc
		abcAbc


	*/

	// -= ��������� ����� =-
	/*
		cin >> a;
	*/

	/*int a, b, c = 0;

	cout << "a: ";
	cin >> a;		//���� ������ � ���������� 'c'

	cout << "b: ";
	cin >> b;		//���� ������ � ���������� 'b'

	c = a * b;

	//cout << "a = " << a << endl;
	cout << a << " * " << b << " = " << c << endl;
	cout << "c = " << c << endl;*/

	/*double a, b, c = 0.0;

	cout << "a: ";
	cin >> a;		//���� ������ � ���������� 'c'

	cout << "b: ";
	cin >> b;		//���� ������ � ���������� 'b'

	c = a - b;
	cout << a << " - " << b << " = " << c << endl;*/


	/*int a = 56, b = 5, c = 0;
	c = a / b;
	cout << c << endl;*/

	/*double a = 56, b = 5;
	double c = a / b;
	cout << c << endl;*/

	/*
		firstSecondThird - Camel case (�������������)
		first_second_third - underscore case
	*/

	int totalDays;	//����� ���-�� ����
	int days = 0, weeks = 0;

	cout << "������� ����� ���������� ����: ";
	cin >> totalDays;		//�������� ����� ������������

	weeks = totalDays / 7;		//7 - ���� � ������
	days = totalDays % 7;

	cout << totalDays << " ���� = " << weeks << " ������ � " << days << " ����" << endl;






	return 0;
}