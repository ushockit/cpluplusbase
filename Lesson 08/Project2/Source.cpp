#include <iostream>

using namespace std;


int main() {

	// -= ����� =-
	/*
		for
		while
		do while
	*/

	// while - ���� � ������������

	//����������� ����
	/*while (true) {
		cout << "Good morning" << endl;
	}*/

	//����� ����� �� 0 �� 10 ������������
	/*int number = 0;
	while (number <= 10) {
		cout << number << endl;
		//���������� �� +1
		number++;
		//���������� �� +2
		//number += 2;
	}*/

	//����� ����� �� 10 �� 0 ������������
	/*int number = 10;

	while (number >= 0) {
		cout << number << endl;
		//���������� �������� �������� �� -1
		number--;
	}*/


	//����� ����� � �������� ���������
	/*int start, end;

	//���� ��������� ������� ���������
	cout << "Start = ";
	cin >> start;

	//���� �������� ������� ���������
	cout << "End = ";
	cin >> end;

	//while (start <= end) {
		//cout << start << endl;
		//start++;
	//}
	int counter = start;
	while (counter <= end) {
		cout << counter << endl;
		counter++;
	}
	cout << "--------" << endl;
	cout << start << endl;
	cout << end << endl;*/


	/*int a;

	cout << "a: ";
	cin >> a;

	while (a <= 100 && a >= 0) {
		//����� ������� 8
		if (a % 8 == 0) {
			break;
		}
		cout << a << endl;
		a++;
	}*/


	//do/while - ���� � �����������

	/*int a = 100;

	do {
		cout << a << endl;
		a++;
	} while (a <= 10);*/


	/*int action;
	do {
		cout << "[1] Start" << endl;
		cout << "[2] Show" << endl;
		cout << "[3] Settings" << endl;
		cout << "[4] Exit" << endl;
		cin >> action;


		switch (action) {
		case 1:
			cout << "Start" << endl;
			break;
		case 2:
			cout << "Show" << endl;
			break;
		case 3:
			cout << "Settings" << endl;
			break;
		case 4:
			cout << "Exit";
			break;
		default:
			cout << "Action does not exists" << endl;
		}
	} while (action >= 1 && action <= 4);*/

	/*int action;

	while (true) {
		cout << "[1] Start" << endl;
		cout << "[2] Show" << endl;
		cout << "[3] Settings" << endl;
		cout << "[4] Exit" << endl;
		cin >> action;


		switch (action) {
		case 1:
			cout << "Start" << endl;
			break;
		case 2:
			cout << "Show" << endl;
			break;
		case 3:
			cout << "Settings" << endl;
			break;
		case 4:
			cout << "Exit" << endl;
			//�������, ���������� ������ ����������
			exit(0);
			break;
		default:
			cout << "Action does not exists" << endl;
		}

		//���������� �����
		//if (action == 4) {
			//break;
		}//
	}*/


	//����� �� ������
	/*int a = -10;
	a = abs(a);
	cout << "a = " << a << endl;*/


	//��������� ����� �� �����
	/*double num = 54.32;
	double res = sqrt(num);
	cout << res << endl;*/


	//���������� ����� � �������
	/*int a = 5;
	int b = 3;
	int res = pow(a, b);
	cout << res << endl;*/

	int start = 10;
	int end = 20;
	int sum = 0;

	while (start <= end) {
		cout << sum << " + " << start << " = " << (sum + start) << endl;
		sum += start;
		start++;
	}

	cout << "Sum = " << sum << endl;

	return 0;
}