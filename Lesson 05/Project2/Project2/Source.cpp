#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	/*cout << (a > 0 && a <= 100 ? "a входит в диапазон от 0 до 100" : "вне диапазона") << endl;
	cout << (a > 100 || a == -10 ? "a больше 100 или равно -10" : "a меньше 101") << endl;

	cout << (a > b && b > 20 ? "> 20" : "a < b") << endl;

	cout << ((a >= 0 && a <= 10) || (b >= 100 && b <= 500) ? "a (0..10) b (100..500)" : "вне диапазона") << endl;
	*/

	//if/else if/else 
	if (a >= 0 && a <= 100) {
		cout << "a входит в диапазон от 0 до 100" << endl;
	}
	/*else {	
		cout << "вне диапазона" << endl;
	}*/

	if ((a >= 0 && a <= 10) || (b >= 100 && b <= 500)) {
		cout << "a = (0..10) || b = (100..500)" << endl;
	}
	else {
		cout << "Числа вне заданных дипазонов" << endl;
	}

	/*
		1. if может существовать сам по себе
		2. else if, не может существовать без if, а так же может быть использован в конструкции неограниченное кол-во раз
		3. else, не может содержать условие. Указывается всегда в конце конструкции. Является не обязательным
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