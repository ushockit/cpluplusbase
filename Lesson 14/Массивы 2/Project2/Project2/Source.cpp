#include <iostream>

using namespace std;

int main() {

	const int SIZE = 8;
	int arr[SIZE];

	//заполнение массива случайными числами + вывод массива на экран
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 21 + -10;
		cout << arr[i] << " ";
	}
	cout << endl;

	//переменная для хранения суммы отрицательных чисел
	/*int sumNegativeNums = 0;

	//подсчет суммы отрацательных элементов
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0) {
			//cout << arr[i] << endl;
			sumNegativeNums += arr[i];
		}
	}

	cout << "Sum of negative nums = " << sumNegativeNums << endl;*/


	//произведение между min/max элементами
	//индексы min/max элементов
	/*int idxMin = 0, idxMax = 0;
	int min = arr[0], max = arr[0];
	//переменная для хранения произведения чисел
	int multNums = 1;
	//поиск min/max элементов
	for (int i = 1; i < SIZE; i++) {
		if (min > arr[i]) {
			min = arr[i];
			idxMin = i;
		}
		if (max < arr[i]) {
			max = arr[i];
			idxMax = i;
		}
	}

	cout << "Idx min = " << idxMin << endl;
	cout << "Idx max = " << idxMax << endl;

	cout << "Min = " << arr[idxMin] << endl;
	cout << "Max = " << arr[idxMax] << endl;
	*/

	//минимальное значение дальше чем максимальное
	/*if (idxMin > idxMax) {
		for (int i = idxMin - 1; i > idxMax; i--) {
			multNums *= arr[i];
		}
	}
	else {
		for (int i = idxMax + 1; i < idxMin; i++) {
			multNums *= arr[i];
		}
	}*/

	/*if (idxMin > idxMax) {
		//int tmp = idxMin;
		//idxMin = idxMax;
		//idxMax = tmp;
		swap(idxMin, idxMax);
	}
	for (int i = idxMin + 1; i < idxMax; i++) {
		multNums *= arr[i];
	}
	cout << "Mult of nums between min/max elements = " << multNums << endl;*/



	/*int multNums = 1;

	//подсчет произведения элементов с четными номерами
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			//cout << arr[i] << endl;
			multNums *= arr[i];
		}
	}

	cout << "Mult = " << multNums << endl;*/


	/*int firstNegativeIdx = 0, lastNegativeIdx = 0;
	int sum = 0;
	//поиск первого отрицательного
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0) {
			firstNegativeIdx = i;
			break;
		}
	}

	//поиск последнего отрицательного
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < 0) {
			lastNegativeIdx = i;
		}
	}

	for (int i = firstNegativeIdx + 1; i < lastNegativeIdx; i++) {
		sum += arr[i];
	}

	cout << "Sum = " << sum << endl;*/

	int tmp[SIZE] = { 0 };
	int count = 3;
	int idx = 0;

	for (int i = SIZE - count; i < SIZE; i++) {
		tmp[idx] = arr[i];
		idx++;
	}

	for (int i = 0; i < SIZE - count; i++) {
		tmp[idx] = arr[i];
		idx++;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << tmp[i] << " ";
	}
	cout << endl;
	//копирование массивов
	for (int i = 0; i < SIZE; i++) {
		arr[i] = tmp[i];
	}

	//int n = ;
	/*cout << rand() % 201 - 100 << endl;

	int count = 3;
	int idx = SIZE - count;

	for (int i = 0; i < count; i++) {
		for (int j = idx; j > i; j--) {
			swap(arr[j], arr[j - 1]);
		}
		idx++;
		//break;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;*/

	return 0;
}