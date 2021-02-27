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
//параметры по умолчанию должны быть расположены после обязательных параметров
/*void drawLine(char symb = '*', int count = 10) {
	for (int i = 0; i < count; i++)
	{
		cout << symb;
	}
	cout << endl;
}*/


//-= Шаблоны функций =-
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

//объявление шаблонной функции
/*template<typename T>
T sumArrayNums(T arr[], int size) {
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}*/

//-= Рекурсивные функции =-
void printNums(int n) {
	/*while (n != 0) {
		cout << n-- << endl;
	}*/
	if (n == 0) {
		return;
	}
	//рекурсия
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
	5 * вызов функции (4)
	4 * вызов функции (3)
	3 * вызов функции (2)
	2 * вызов функции (1)
	1 * вызов функции (0)
	остановка рекурсии
	1 * 1 = 1 (результат работы 1ой функции)
	2 * 1 = 2 (результат работы 2ой функции)
	3 * 2 = 6 (результат работы 3ей функции)
	4 * 6 = 24 (результат работы 4ой функции)
	5 * 24 = 120 (результат работы 4ой функции)
*/

int main() {
	/*const int ARROW_KEY = 224;

	while (true) {
		int key = _getch();
		//была нажата стрелка
		if (key == ARROW_KEY) {
			key = _getch();
		}
		cout << "Key - " << key << " value - " << (char)key << endl;
	}*/

	/*const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };

	//перегруженная функция
	printArray(arr, SIZE);

	int dArr[SIZE][SIZE] = {
		{1,2,3,4,5},
		{10,20,30,40,50},
		{100,200,300,400,500},
		{1000,2000,3000,4000,5000},
		{10000,20000,30000,40000,50000},
	};
	//перегруженная функция
	printArray(dArr, SIZE);*/

	//функция с параметрами по умолчанию
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


	//-= Рекурсия =-
	//функция вызывает сама себя
	//printNums(10);

	/*const int SIZE = 5;
	int arr[SIZE] = { 1,2,3,4,5 };
	printArray(arr, SIZE);*/

	int res = fact(5);
	cout << "Fact = " << res << endl;

	return 0;
}