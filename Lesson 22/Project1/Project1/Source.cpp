#include <iostream>

using namespace std;

const int SIZE = 100;
const int RANGE_COUNT = 10;

//функция генерирование случайного значение в указанном диапазоне
int generateNum(int from, int to) {
	return rand() % (to - from) + from + 1;
}
//функция заполнения массива случайными числами
void fillArray(int arr[], int size, int from, int to) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = generateNum(from, to);
	}
}
//функция вывода массива на экран
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int sumInRange(int arr[], int idxFrom, int idxTo) {
	int sum = 0;

	cout << "[" << idxFrom << "] ";
	for (int i = idxFrom; i < idxTo; i++)
	{
		sum += arr[i];
		cout << arr[i] << " ";
	}
	cout << " | " << sum << endl;
	return sum;
}

int findMin(int arr[], int size) {
	int min = arr[0];
	int minIdx = 0;
	for (int i = 1; i < size; i++)
	{
		if (min > arr[i]) {
			min = arr[i];
			minIdx = i;
		}
	}
	return minIdx;
}
int minSumIdxInArray(int arr[], int size, int tmp[], int idx = 0) {
	if (idx > 90) {
		//TODO: Find min idx
		/*int index = findMin(tmp, SIZE - RANGE_COUNT);
		return index;*/
		return findMin(tmp, SIZE - RANGE_COUNT + 1);
	}
	//сумма чисел в диапазоне
	tmp[idx] = sumInRange(arr, idx, RANGE_COUNT + idx);
	minSumIdxInArray(arr, size, tmp, idx + 1);
}

int main() {
	

	int arr[SIZE];
	//вспомогательный массив для хранения сумм 10и элементов
	int tmp[SIZE - RANGE_COUNT + 1];

	fillArray(arr, SIZE, 10, 200);
	printArray(arr, SIZE);
	

	int index = minSumIdxInArray(arr, SIZE, tmp);

	cout << "Index = " << index << endl;

	return 0;
}