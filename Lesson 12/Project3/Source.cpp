#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));

	//������ - ��� ������������������ ���������� ������

	//const int SIZE = 10;
	//���������� ������� �������
	//int arr[SIZE];

	//���������� ������� �� 10 ��������� � �������������� ���� ��������� ������
	//int arr[SIZE] = { 0 };

	//���������� ������� �� 10 ��������� � �������������� ������� �������� ��������� 5, 
	//� ���� ��������� ������
	//int arr[SIZE] = { 5 };

	
	//���������� ������� �� 10 ��������� � �������������� ������� ��������
	//int arr[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };


	/*const int SIZE = 10;
	int arr[SIZE] = { 0 };

	//cin >> arr[1];
	//��������� � ���������� ������� �� �������
	//��������� ������ � �������
	arr[1] = 200;
	arr[5] = 100;
	arr[SIZE - 1] = 70;
	arr[2] = arr[1] * 2;

	//����� ����� �������
	cout << arr[1] << endl;
	cout << arr[5] << endl;
	cout << arr[SIZE - 1] << endl;
	cout << arr[1] << endl;*/

	/*const int SIZE = 10;
	int arr[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;
	//cout << arr[5] << endl;
	//cout << arr[6] << endl;
	//cout << arr[7] << endl;
	//cout << arr[8] << endl;
	//cout << arr[9] << endl;


	//����� ���� ��������� �������
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//����� ������ ��������
	for (int i = 0; i < SIZE / 2; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//����� ������ ��������
	for (int i = SIZE / 2; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//����� ������� � �������� �������
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << "[" << arr[i] << "] ";
	}
	cout << endl;

	//���������� ����� ��-�� �������
	int sum = 0;
	//int a = 10, b = 20, c = 30;
	//sum += a;
	//sum += b;
	//sum += c;

	//���������� ����� ��������� �������
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "Sum = " << sum << endl;*/

	/*const int SIZE = 15;
	int arr[SIZE];

	//������������ ������� ���������� ������� � ��������� �� 1 �� 100
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << endl;
	}*/



	return 0;
}