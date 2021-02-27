#include <iostream>

using namespace std;


int main() {

	//разбиение числа на цифры
	/*int value = 568;
	int n1, n2, n3;

	//получение последней цифры
	n3 = value % 10;
	//получение средней цифры
	n2 = value % 100 / 10;
	//получение первой цифры
	n1 = value / 100;

	cout << n1 << endl
		<< n2 << endl
		<< n3 << endl;
	*/

	//нахождение кол-ва цифр в числе
	/*int value = 1890561;
	//переменная дл подсчет кол-ва цифр
	int countNums = 0;

	while (value != 0) {
		//cout << value << endl;
		cout << value % 10 << endl;
		value /= 10;
		countNums++;
	}

	cout << "Count nums = " << countNums << endl;*/



	//-= Вложенные циклы =-
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			cout << "a ";
		}
		cout << endl;
	}*/

	/*int value = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++) {
			cout << value << "  ";
			value++;
		}
		cout << endl;
	}*/

	/*int width = 10, height = 10;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i > 0 && i < height - 1 &&
				j > 0 && j < width - 1) {
				cout << "   ";
			}
			else {
				cout << " * ";
			}
		}
		cout << endl;
	}*/


	int height = 10;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}