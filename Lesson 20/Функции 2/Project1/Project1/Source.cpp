#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

/*
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void printArray(int arr[][5], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			cout << setw(6) << arr[i][j];
		}
		cout << endl;
	}
}
*/
//��������� �� ��������� ������ ���� ����������� ����� ������������ ����������
/*void drawLine(char symb = '*', int count = 10) {
	for (int i = 0; i < count; i++)
	{
		cout << symb;
	}
	cout << endl;
}*/


//-= ������� ������� =-
/*int sumArrayNums(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double sumArrayNums(double arr[], double size) {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}*/

//���������� ��������� �������
/*template<typename T>
T sumArrayNums(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}*/

//-= ����������� ������� =-
void printNums(int n) {
	/*while (n != 0) {
		cout << n-- << endl;
	}*/
	if (n == 0) {
		return;
	}
	//��������
	printNums(n - 1);
	cout << n << endl;
}

void printArray(int arr[], int size, int index = 0)
{
	if (index == size) {
		return;
	}
	cout << arr[index] << endl;
	printArray(arr, size, index + 1);
}

//5!=1*2*3*4*5
int fact(int n) {
	if (n <= 0) {
		return 1;
	}
	return n * fact(n - 1);
}
/*
	5! = 120
	5 * ����� ������� (4)
	4 * ����� ������� (3)
	3 * ����� ������� (2)
	2 * ����� ������� (1)
	1 * ����� ������� (0)
	��������� ��������
	1 * 1 = 1 (��������� ������ 1�� �������)
	2 * 1 = 2 (��������� ������ 2�� �������)
	3 * 2 = 6 (��������� ������ 3�� �������)
	4 * 6 = 24 (��������� ������ 4�� �������)
	5 * 24 = 120 (��������� ������ 4�� �������)
*/

int main() {
	/*const int ARROW_KEY = 224;

	while (true) {
		int key = _getch();
		//���� ������ �������
		if (key == ARROW_KEY) {
			key = _getch();
		}
		cout << "Key - " << key << " value - " << (char)key << endl;
	}*/

	/*const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };

	//������������� �������
	printArray(arr, SIZE);

	int dArr[SIZE][SIZE] = {
		{1,2,3,4,5},
		{10,20,30,40,50},
		{100,200,300,400,500},
		{1000,2000,3000,4000,5000},
		{10000,20000,30000,40000,50000},
	};
	//������������� �������
	printArray(dArr, SIZE);*/

	//������� � ����������� �� ���������
	/*drawLine('*', 15);
	drawLine('+');
	drawLine();*/

	/*const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };
	int res = sumArrayNums(arr, SIZE);
	cout << res << endl;

	double arr2[SIZE] = { 1.56, 2.89, 11.35, 89.3, 190.543 };
	double res2 = sumArrayNums(arr2, SIZE);
	cout << res2 << endl;*/


	//-= �������� =-
	//������� �������� ���� ����
	//printNums(10);

	/*const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };
	printArray(arr, SIZE);*/

	int res = fact(5);
	cout << "Fact = " << res << endl;

	return 0;
}