#include <iostream>
#include <conio.h>
using namespace std;

void menu() {
	cout << "[1] Start" << endl;
	cout << "[2] Exit" << endl;
}

void startGame() {
	const int SIZE = 3;
	char field[SIZE][SIZE] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'},
	};

	//���-�� ����� � ����
	int countSteps = SIZE * SIZE;
	while (countSteps > 0) {
		system("cls");
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout << field[i][j] << " ";
			}
			cout << endl;
		}
		_getch();
	}
}

void runMenuAction(int action) {
	switch (action) {
	case 1:
		startGame();
		break;
	case 2:
		//���������� ������ ���������
		exit(0);
		break;
	}
}

void start() {
	int menuAction;
	while (true) {
		//������� ������
		system("cls");
		//����� ����
		menu();
		//���� ��������
		cin >> menuAction;
		runMenuAction(menuAction);
	}
}

int main() {
	start();

	return 0;
}