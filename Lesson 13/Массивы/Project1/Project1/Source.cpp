#include <iostream>
#include <ctime>

using namespace std;


enum Player {
	CROSS = 1,
	ZERO
};

int main() {
	srand(time(0));
	setlocale(LC_ALL, "rus");

	/*const int SIZE = 15;

	int arr[SIZE];

	//заполнение массива случайными числами
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	//вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	const char CROSS_SYMB = 'X';
	const char ZERO_SYMB = '0';
	//размер массива
	const int SIZE = 9;
	char field[SIZE] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	Player player1, player2;
	//текущий ход
	Player currentStep = CROSS;
	//была ли победа
	bool isWin = false;

	//выбор первого хода
	int n = rand() % 2 + 1;
	if (n == 1) {
		player1 = CROSS;
		player2 = ZERO;
	}
	else {
		player2 = CROSS;
		player1 = ZERO;
	}
	//кол-во сделанных шагов двумя игроками
	int steps = 0;
	//номер ячейки в которую игрок хочет походить
	int cellNum;
	//цикл игры
	while (steps < SIZE) {
		//очистка экрана
		system("cls");
		//вывод текущего хода
		cout << "Ходит: " << (currentStep == CROSS ? CROSS_SYMB : ZERO_SYMB) << endl;

		//вывод поля
		for (int i = 0; i < SIZE; i++) {
			cout << field[i] << " ";
			if ((i + 1) % 3 == 0) {
				cout << endl;
			}
		}
		do {
			cout << "Выберите ячейку: ";
			cin >> cellNum;
		} while ((cellNum < 1 || cellNum > SIZE) || (field[cellNum - 1] == CROSS_SYMB || field[cellNum - 1] == ZERO_SYMB));


		//ставим X/0 на поле
		field[cellNum - 1] = currentStep == CROSS ? CROSS_SYMB : ZERO_SYMB;

		//проверка на победу
		if (field[0] == field[1] && field[1] == field[2]) {
			break;
		}
		else if (field[3] == field[4] && field[4] == field[5]) {
			isWin = true;
			break;
		}
		else if (field[6] == field[7] && field[7] == field[8]) {
			isWin = true;
			break;
		}
		else if (field[0] == field[3] && field[3] == field[6]) {
			isWin = true;
			break;
		}
		else if (field[1] == field[4] && field[4] == field[7]) {
			isWin = true;
			break;
		}
		else if (field[2] == field[5] && field[5] == field[8]) {
			isWin = true;
			break;
		}
		else if (field[0] == field[4] && field[4] == field[8]) {
			isWin = true;
			break;
		}
		else if (field[2] == field[4] && field[4] == field[6]) {
			isWin = true;
			break;
		}

		//передача хода другому игроку
		currentStep = currentStep == CROSS ? ZERO : CROSS;
		steps++;
	}
	if (isWin == true) {
		cout << "Выиграл " << (currentStep == CROSS ? CROSS_SYMB : ZERO_SYMB) << endl;
	}
	else {
		cout << "Ничья" << endl;
	}




	return 0;
}