#include <iostream>

using namespace std;


void demo(int value) {
	value += 10;
	cout << "value = " << value << endl;
}
//���������� ������� ���������� �������
void fillArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
//����� ������� �� �����
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
//������� ���������� ��������� �������
void reverseArray(int arr[], int size) {
	//������ ��� ������� �� ������� � �����
	int idx = size - 1;
	for (int i = 0; i < size / 2; i++) {
		swap(arr[i], arr[idx--]);
		//idx--;
	}
}
//������� ������� ����� ����� �� ����� �������� � ���������� ��������� � 3�� ������
void sumArrays(int arr1[], int arr2[], int arr3[], int size) {
	for (int i = 0; i < size; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}
}


int main() {

	/*int a = 0;
	demo(a);
	cout << "a = " << a << endl;*/

	/*int arr[5];

	fillArray(arr, 5);
	printArray(arr, 5);

	fillArray(arr, 5);
	printArray(arr, 5);

	int arr2[15];
	fillArray(arr2, 15);
	printArray(arr2, 15);*/

	/*const int SIZE = 11;
	int arr[SIZE];

	fillArray(arr, SIZE);
	printArray(arr, SIZE);
	reverseArray(arr, SIZE);
	printArray(arr, SIZE);*/

	const int SIZE = 10;
	int values1[SIZE], values2[SIZE], values3[SIZE];

	//���������� �������� ���������� �������
	fillArray(values1, SIZE);
	fillArray(values2, SIZE);

	//����� �������� �� �����
	printArray(values1, SIZE);
	printArray(values2, SIZE);

	sumArrays(values1, values2, values3, SIZE);
	printArray(values3, SIZE);

	return 0;
}