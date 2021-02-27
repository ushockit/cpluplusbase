#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "rus");


	//int a = -120;
	//int b = 30;

	/*if (a > 0) {
		cout << "a > 0" << endl;
	}
	else if (a < 0) {
		cout << "a < 0" << endl;
	}
	else  {
		cout << "a = 0" << endl;
	}*/

	/*if (a >= 80 && a <= 90) {
		cout << "80..90" << endl;
	}
	if (a >= 50 && a <= 80) {
		cout << "50..80" << endl;
	}
	if (a >= 0 && a <= 100) {
		cout << "0..100" << endl;
	}*/


	/*if (a >= 80 && a <= 90) {
		cout << "80..90" << endl;
	}
	else if (a >= 50 && a <= 70) {
		cout << "50..70" << endl;
	}
	else if (a >= 0 && a <= 100) {
		cout << "0..49 && 91..100" << endl;
	}
	else {
		cout << "101.." << INT_MAX << " -1 .." << INT_MIN << endl;
	}*/

	/*if (a > 0) {
		a += 10;
	}
	if (b > 0) {
		b += 10;
	}*/

	/*int a = 33, b = 27, c = -10, d = 39, e = 89, f = 190, g = 150;
	//предположительно, что максимальное значение это 'a'
	int max = a;

	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	if (max < e) {
		max = e;
	}
	if (max < f) {
		max = f;
	}
	if (max < g) {
		max = g;
	}

	cout << "Max = " << max << endl;*/

	/*int a, b;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	if (a > 0 && b > 0) {
		cout << "Оба числа > 0" << endl;
		if (a > b) {
			cout << "a большее" << endl;
		}
		else if (b > a) {
			cout << "b больше" << endl;
		}
		else {
			cout << "a = b" << endl;
		}
	}
	else {
		cout << "Какое-то из чисел <= 0" << endl;
	}*/


	//действие калькулятора (+ - / *)
	/*char action;
	double a, b, result = 0.0;

	cout << "a: ";
	cin >> a;

	cout << "action: ";
	cin >> action;

	cout << "b: ";
	cin >> b;*/

	/*if (action == '+') {
		result = a + b;
	}
	else if (action == '-') {
		result = a - b;
	}
	else if (action == '/') {
		result = a / b;
	}
	else if (action == '*') {
		result = a * b;
	}
	else {
		cout << "Действия не существует" << endl;
	}*/

	//cout << a << " " << action << " " << b << " = " << result << endl;

	/*switch (action) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '/':
		result = a / b;
		break;
	case '*':
		result = a * b;
		break;
	default:		//в случае, если действие не найдено
		cout << "Действия не существует" << endl;
	}
	cout << a << " " << action << " " << b << " = " << result << endl;*/

	/*double a, b, result = 0.0;
	int action;


	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	cout << "[1] +" << endl;
	cout << "[2] -" << endl;
	cout << "[3] /" << endl;
	cout << "[4] *" << endl;
	cin >> action;

	if (action >= 1 && action <= 4) {
		switch (action) {
		case 3:
			if (b == 0) {
				cout << "На нуль делить нельзя" << endl;
				break;
			}
			result = a / b;
			break;
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 4:
			result = a * b;
			break;
		}
		cout << "Result = " << result << endl;
	}
	else {
		cout << "Действия не существует" << endl;
	}*/

	int num;

	cout << "num: ";
	cin >> num;

	switch(num) {
	case 1:
		cout << "Action 1" << endl;
		//break;
	case 2:
		cout << "Action 2" << endl;
		//break;
	case 3:
		cout << "Action 3" << endl;
		break;
	case 4:
		cout << "Action 4" << endl;
		//break;
	default:
		cout << "Other action" << endl;
	}

	return 0;
}