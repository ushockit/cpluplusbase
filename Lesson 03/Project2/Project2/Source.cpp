#include <iostream>

using namespace std;

int main() {
	//подключение русского €зыка
	setlocale(LC_ALL, "rus");

	//объ€вление целочисленных переменных
	/*int a = 0, b = 10;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a = " << a << " b = " << b << endl;

	char symb = 'B';
	cout << "Symb = " << symb << endl;*/

	//bool s = true;

	//объ€вление переменных
	/*int a = 5, b = 9, c = 0;
	//вычисление суммы чисел
	c = a + b;

	//вывод результата на экран
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


	//PI = 100.65;		//запрещено
	cout << PI << endl;*/


	/*
		-= ѕравила именовани€ переменных =-

		abc
		_abc
		abc1
		abc_1
		ABC
		abc_abc
		abcAbc


	*/

	// -= ќператора ввода =-
	/*
		cin >> a;
	*/

	/*int a, b, c = 0;

	cout << "a: ";
	cin >> a;		//ввод данных в переменную 'c'

	cout << "b: ";
	cin >> b;		//ввод данных в переменную 'b'

	c = a * b;

	//cout << "a = " << a << endl;
	cout << a << " * " << b << " = " << c << endl;
	cout << "c = " << c << endl;*/

	/*double a, b, c = 0.0;

	cout << "a: ";
	cin >> a;		//ввод данных в переменную 'c'

	cout << "b: ";
	cin >> b;		//ввод данных в переменную 'b'

	c = a - b;
	cout << a << " - " << b << " = " << c << endl;*/


	/*int a = 56, b = 5, c = 0;
	c = a / b;
	cout << c << endl;*/

	/*double a = 56, b = 5;
	double c = a / b;
	cout << c << endl;*/

	/*
		firstSecondThird - Camel case (рекомендуемый)
		first_second_third - underscore case
	*/

	int totalDays;	//ќбщее кол-во дней
	int days = 0, weeks = 0;

	cout << "¬ведите общее количество дней: ";
	cin >> totalDays;		//ожидание ввода пользовател€

	weeks = totalDays / 7;		//7 - дней в неделе
	days = totalDays % 7;

	cout << totalDays << " дней = " << weeks << " недель и " << days << " дней" << endl;






	return 0;
}