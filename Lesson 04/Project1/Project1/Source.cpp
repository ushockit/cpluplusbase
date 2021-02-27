#include <iostream>

using namespace std;

int main() {
	/*int a, b, c = 0;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;*/


	//Варианты использования тернарного оператора
	//1.
	//(a > b) ? a = b : a += 10;
	//cout << "a = " << a << " b = " << b << endl;

	//2.
	//cout << (a != b ? "a != b" : "a == b") << endl;

	//3.
	//c = (a >= b ? 50 : b + 30);
	//cout << "c = " << c << endl;


	// -= Инкремент/Декремент =-

	//int a = 10, b = 5, c = 0;

	/*a++;
	++a;
	cout << "a = " << a << endl;*/

	//использование постфиксной формы
	//c = a++ + b * b - b--;
	//использование префиксной формы

	//4 * 4 = 16
	//11 + 16 = 27
	//27 - 4 = 23

	//c = ++a + b * b - --b;

	/*cout << "c = " << c << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

	// -= Преобразования =-
	/*
		- Явное
		- Не явное
	*/
	int a = 10, b = 3;
	double c = 0.0;

	//явное преобразование
	/*c = a / (double)b;
	cout << "c = " << c << endl;*/

	//не явное преобразование
	/*c = a;
	double k = 10.35;
	int res = k;
	double z = k - res;
	cout << z << endl;*/

	/*char s = 178;
	char s2 = '^';

	cout << s << endl;
	cout << s2 << endl;*/

	cout << (char)177 << (char)178 << (char)178 << (char)178 << (char)178 << (char)178 << endl;
	cout << (char)177 << (char)177 << (char)178 << (char)177 << (char)177 << (char)178 << endl;
	cout << (char)178 << (char)177 << (char)178 << (char)177 << (char)177 << (char)178 << endl;
	cout << (char)178 << (char)177 << (char)177 << (char)177 << (char)177 << (char)178 << endl;
	cout << (char)178 << (char)178 << (char)178 << (char)178 << (char)177 << (char)178 << endl;
	cout << (char)178 << (char)178 << (char)178 << (char)178 << (char)177 << (char)177 << endl;
	cout << (char)178 << (char)178 << (char)178 << (char)178 << (char)178 << (char)177 << endl;

	return 0;
}