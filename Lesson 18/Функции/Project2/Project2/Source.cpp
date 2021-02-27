#include <iostream>

using namespace std;


//-= Прототипы =-
void welcome();
//функция вывода линии на экран
void drawLine(char, int);
//функция нахождени степени
int myPow(int, int);
//функция для нахождения суммы чисел в диапазоне
int sumInRange(int, int);
//функция для проверки числа на четность
bool isEven(int);

int main() {
	//вызов функции
	/*welcome();
	drawLine('+', 10);
	
	welcome();
	drawLine('-', 15);

	welcome();
	drawLine('#', 7);

	welcome();
	drawLine('@', 2);*/

	/*double result = pow(5, 3);
	cout << "result = " << result << endl;*/
	/*int result = myPow(5, 3);
	cout << "result = " << result << endl;*/

	/*cout << "10..20 = " << sumInRange(10, 20) << endl;
	cout << "1..10 = " << sumInRange(1, 10) << endl;
	cout << "100..200 = " << sumInRange(100, 200) << endl;
	cout << "150..170 = " << sumInRange(150, 170) << endl;*/
	

	//if (isEven(7))
	if (isEven(7) == true) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}

	int arr[5] = { 10, 27, 29, 95, 68 };

	for (int i = 0; i < 5; i++)
	{
		if (isEven(arr[i])) {
			cout << arr[i] << " is even" << endl;
		}
		else {
			cout << arr[i] << " is odd" << endl;
		}
	}

	//!5 = 1*2*3*4*5 - (120)


	return 0;
}

//-= Определений функций =-
void welcome()
{
	cout << "Good morning" << endl;
}

void drawLine(char symb, int size)
{
	for (int i = 0; i < size; i++) {
		cout << symb;
	}
	cout << endl;
}

int myPow(int value, int power)
{
	int result = 1;

	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	//cout << "Result = " << result << endl;
	return result;
}

int sumInRange(int from, int to)
{
	int result = 0;
	for (int i = from; i <= to; i++)
	{
		result += i;
	}
	return result;
}

bool isEven(int value)
{
	/*if (value % 2 == 0) {
		return true;
	}
	return false;*/
	return value % 2 == 0;
}