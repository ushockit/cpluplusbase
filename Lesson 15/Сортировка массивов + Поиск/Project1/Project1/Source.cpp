#include <iostream>

using namespace std;


int main() {

	const int SIZE = 15;
	int arr[SIZE];

	//инициализация массива случайными числами
	for (int i = 0; i < SIZE; i++)
	{
		//-10..50
		arr[i] = rand() % 61 + -10;
		cout << arr[i] << " ";
	}
	cout << endl;

	//сортировка "Пузырьком" - 64
	/*int countMovements = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			//элемент больше и не под тем же индексом
			if (arr[i] < arr[j] && i != j) {
				//замена элементов
				swap(arr[i], arr[j]);
				countMovements++;
			}
		}
	}
	cout << "Count movements = " << countMovements << endl;*/

	//сортировка "Вставками" - 58
	/*int countMovements = 0;
	for (int i = 1; i < SIZE; i++) {
		//запоминаем текущий элемент массива
		int tmp = arr[i];
		//идентификатор предыдущего элемента
		int idxPrev = i - 1;
		
		while (idxPrev >= 0 && arr[idxPrev] > tmp) {
			swap(arr[idxPrev + 1], arr[idxPrev]);
			idxPrev--;
			countMovements++;
		}
	}
	cout << "Count movements = " << countMovements << endl;
	*/
	//сортировка "Выбором" - 58
	int countMovements = 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[i] > arr[j]) {
				//замена элементов
				swap(arr[i], arr[j]);
				//cout << arr[j] << " -> " << arr[i] << endl;
				countMovements++;
			}
		}
	}
	//cout << "Count movements = " << countMovements << endl;

	cout << "-----------------------------------" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	//Алгоритмы поиска

	/*int srchItem = 0;
	bool isFound = false;
	//Линейный
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == srchItem) {
			//cout << "Search - " << arr[i] << endl;
			isFound = true;
			break;
		}
	}

	//если элемент найден, то ....
	//if (isFound == true) 
	//if (isFound)
	//{
	//	cout << "Item was found" << endl;
	//}
	////элемент не найден, то...
	//else {
	//	cout << "Item was not found" << endl;
	//}

	//if (isFound == false) 
	//if (!isFound)
	//{
	//	cout << "Item was not found" << endl;
	//}
	*/

	//Бинарный
	//искомый эл-т
	int value = 0;
	int left, right, midd;


	left = 0;
	right = SIZE - 1;

	bool isFound = false;

	while (true) {
		//поиск середины
		midd = (left + right) / 2;
		
		if (value < arr[midd]) {
			right = midd - 1;
		}
		else if (value > arr[midd]) {
			left = midd + 1;
		}
		else {	//элемент найден
			isFound = true;
			//cout << "Left - " << left << " right = " << right << endl;
			break;
		}

		//элемент не найден
		if (left > right) {
			//cout << "Left - " << left << " right = " << right << endl;
			break;
		}
	}


	if (isFound) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not found" << endl;
	}



	return 0;
}