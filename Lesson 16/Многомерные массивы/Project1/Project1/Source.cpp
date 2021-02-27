#include <iostream>
#include <ctime>
#include <iomanip>		//��� ������� setw

using namespace std;


int main() {
	srand(time(0));

	// -= ����������� ������� =-
	const int ROWS = 5, COLS = 5;
	int arr[ROWS][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	//����� ���������� �������
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;

	//����� ���������� ������
	int rowNum = 1;
	for (int i = 0; i < COLS; i++) {
		cout << arr[rowNum][i] << " ";
	}
	cout << endl;

	cout << "--------------------------" << endl;

	//����� ���������� ������� � �������� �������
	for (int i = ROWS - 1; i >= 0; i--) {
		for (int j = COLS - 1; j >= 0; j--) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "--------------------------" << endl;

	//���������� ������� ���������� �������
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 120 + 1;
		}
	}

	//���������� ���������� �������
	//for (int i = 0; i < ROWS; i++) {
	//	for (int j = 0; j < COLS; j++) {
	//		//arr[i][j] - ������� ��-� �������
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