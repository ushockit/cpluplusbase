#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));

	//ћассив - это последовательность однотипных данных

	//const int SIZE = 10;
	//объ€вление пустого массива
	//int arr[SIZE];

	//объ€вление массива на 10 элементов с инициализацией всех элементов нул€ми
	//int arr[SIZE] = { 0 };

	//объ€вление массива на 10 элементов с инициализацией первого элемента значением 5, 
	//а всех остальных нул€ми
	//int arr[SIZE] = { 5 };

	
	//объ€вление массива на 10 элементов с инициализацией каждого элемента
	//int arr[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };


	/*const int SIZE = 10;
	int arr[SIZE] = { 0 };

	//cin >> arr[1];
	//обращение к элементами массива по индексу
	//изменение данных в массиве
	arr[1] = 200;
	arr[5] = 100;
	arr[SIZE - 1] = 70;
	arr[2] = arr[1] * 2;

	//вывод €чеек массива
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


	//вывод всех элементов массива
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//вывод первой половины
	for (int i = 0; i < SIZE / 2; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//вывод второй половины
	for (int i = SIZE / 2; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//вывод массива в обратном пор€дке
	for (int i = SIZE - 1; i >= 0; i--) {
		cout << "[" << arr[i] << "] ";
	}
	cout << endl;

	//нахождение суммы эл-ов массива
	int sum = 0;
	//int a = 10, b = 20, c = 30;
	//sum += a;
	//sum += b;
	//sum += c;

	//нахождение суммы элементов массива
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "Sum = " << sum << endl;*/

	/*const int SIZE = 15;
	int arr[SIZE];

	//инциализаци€ массива случайными числами в диапазоне от 1 до 100
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << endl;
	}*/



	return 0;
}