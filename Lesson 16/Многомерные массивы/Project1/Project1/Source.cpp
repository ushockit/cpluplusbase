#include <iostream>
#include <ctime>
#include <iomanip>		//для функции setw

using namespace std;


int main() {
	srand(time(0));

	// -= Многомерные массивы =-
	const int ROWS = 5, COLS = 5;
	int arr[ROWS][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	//вывод двумерного массива
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;

	//вывод конкретной строки
	int rowNum = 1;
	for (int i = 0; i < COLS; i++) {
		cout << arr[rowNum][i] << " ";
	}
	cout << endl;

	cout << "--------------------------" << endl;

	//вывод двумерного массива в обратном порядке
	for (int i = ROWS - 1; i >= 0; i--) {
		for (int j = COLS - 1; j >= 0; j--) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;

	//заполнение массива случайными числами
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 120 + 1;
		}
	}

	//сортировка двумерного массива
	//for (int i = 0; i < ROWS; i++) {
	//	for (int j = 0; j < COLS; j++) {
	//		//arr[i][j] - текущий эл-т массива
	//		for (int k = 0; k < ROWS; k++) {
	//			for (int n = 0; n < COLS; n++) {
	//				if (arr[i][j] < arr[k][n]) {
	//					swap(arr[i][j], arr[k][n]);
	//				}
	//			}
	//		}
	//	}
	//}

	cout << "--------------------------" << endl;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << setw(4) <<  arr[i][j];
		}
		cout << endl;
	}
	return 0;
}