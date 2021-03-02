#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

enum Key {
	UP = 72,
	DOWN = 80,
	LEFT = 75,
	RIGHT = 77,
	ARROW = 224,
};

#define FIELD_SYMB ' '
#define FIELD_NUM 0
#define SNAKE_SYMB '*'

//размер поля
const int FIELD_SIZE = 50;
//Draw delay (задержка перерисовки)
const int DRAW_DELAY = 250;
//максимальный размер змейки
const int MAX_SNAKE_SIZE = 100;
//текущий размер змейки
int currSnakeSize = 4;
//змейка
//char snake[MAX_SNAKE_SIZE];
//позиция змейки
int snakePosRow = 0;
int snakePosCol = 4;
//направление змейки
Key snakeDirection = RIGHT;

//игровое поле
int gameField[FIELD_SIZE][FIELD_SIZE] = { 0 };

void init() {

}
void changeDirection(int key) {
	switch (key) {
	case UP:
		snakeDirection = UP;
		break;
	case DOWN:
		snakeDirection = DOWN;
		break;
	case LEFT:
		snakeDirection = LEFT;
		break;
	case RIGHT:
		snakeDirection = RIGHT;
		break;
	}
}

void movement() {
	switch (snakeDirection)
	{
	case UP:
		snakePosRow--;
		break;
	case DOWN:
		snakePosRow++;
		break;
	case LEFT:
		snakePosCol--;
		break;
	case RIGHT:
		snakePosCol++;
		break;
	}
}


void drawField() {
	for (int i = 0; i < FIELD_SIZE; i++)
	{
		for (int j = 0; j < FIELD_SIZE; j++)
		{
			//draw snake
			//Right direction
			if (i == snakePosRow && (j > snakePosCol - currSnakeSize &&  j <= snakePosCol)) {
				cout << SNAKE_SYMB;
			}
			else if (gameField[i][j] == FIELD_NUM) {
				cout << FIELD_SYMB;
			}
		}
		cout << endl;
	}
}

void startGame() {
	//инициализация поля
	//initGameField();

	while (true) {
		system("cls");
		cout << "Q - exit" << endl;
		//вывод игрового поля
		drawField();
		//Была нажата клавиша (в буфер попал символ)
		if (_kbhit()) {
			//поулчение символа из буфера
			int key = _getch();

			//была нажата стрелка
			if (key == ARROW) {
				//получение второго символа из буфера
				key = _getch();
				changeDirection(key);
			}
			else if (key == 'q' || key == 'Q') {
				break;
			}

		}

		//перемещение змейки
		movement();
		//TODO: Check snake state

		//задержка в 1с
		Sleep(DRAW_DELAY);
	}

	cout << "Game end" << endl;
}

int main() {

	startGame();


	return 0;
}