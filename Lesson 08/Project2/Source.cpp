#include <iostream>

using namespace std;


int main() {

	// -= Циклы =-
	/*
		for
		while
		do while
	*/

	// while - цикл с предусловием

	//бесконечный цикл
	/*while (true) {
		cout << "Good morning" << endl;
	}*/

	//вывод чисел от 0 до 10 включительно
	/*int number = 0;
	while (number <= 10) {
		cout << number << endl;
		//увеличение на +1
		number++;
		//увеличение на +2
		//number += 2;
	}*/

	//вывод чисел от 10 до 0 включительно
	/*int number = 10;

	while (number >= 0) {
		cout << number << endl;
		//уменьшение значения счетчика на -1
		number--;
	}*/


	//вывод чисел в заданном диапазоне
	/*int start, end;

	//ввод начальной границы диапазона
	cout << "Start = ";
	cin >> start;

	//ввод конечной границы диапазона
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
		//число кратное 8
		if (a % 8 == 0) {
			break;
		}
		cout << a << endl;
		a++;
	}*/


	//do/while - цикл с постусловие

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
			//функция, завершения работы приложения
			exit(0);
			break;
		default:
			cout << "Action does not exists" << endl;
		}

		//прерывание цикла
		//if (action == 4) {
			//break;
		}//
	}*/


	//число по модулю
	/*int a = -10;
	a = abs(a);
	cout << "a = " << a << endl;*/


	//получение корня из числа
	/*double num = 54.32;
	double res = sqrt(num);
	cout << res << endl;*/


	//возведение числа в степень
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