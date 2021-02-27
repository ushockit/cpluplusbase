#include <iostream>
using namespace std;


int main() {

	// -= Цикл FOR =-
	/*
		for (объявление счетчика; условие; шаг счетчика) {
			...тело цикла
		}
	*/

	//вывод значений от 1 до 10
	/*for (int i = 1; i <= 10; i++) {
		//cout << i << endl;
		cout << i << " ";
	}
	cout << endl;*/

	//вывод значений от 0.0 до 2.0
	/*for (double i = 0.0; i < 2.1; i += 0.1) {
		cout << i << " ";
	}
	cout << endl;*/

	//вывод значений от 10 до 1
	/*for (int i = 10; i >= 1; i--) {
		cout << i << " ";
	}
	cout << endl;*

	
	//вывод значений в заданном пользователем диапазоне
	/*int start, end;

	cout << "start: ";
	cin >> start;

	cout << "end: ";
	cin >> end;


	for (int i = start; i <= end; i++) {
		cout << i << " ";
	}
	cout << endl;*/

	//выход из цикла
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
		//число кратное 5и
		if (i % 5 == 0) {
			//выход из цикла
			break;
		}
	}
	cout << endl;

	//переход к следующей итерации (пропуск итерации)
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		if (i % 7 == 0) {
			//переход к следующей итерации (пропуск тела цикла, которое идет ниже)
			continue;
		}

		if (i % 2 == 0) {
			cout << "-= " << i << " =-" << endl;
		}
		else {
			cout << "=-" << i << " -=" << endl;
		}
		//какие-то действия
		sum += i;
	}


	system("pause");
	return 0;
}