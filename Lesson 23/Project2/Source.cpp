#include <iostream>
#include <typeinfo>

using namespace std;

void ex01(int* ptr) {
	(*ptr) += 10;
}

void customSwap(int* val1, int* val2) {
	int tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

void printArray(int* pArr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << pArr[i] << " ";
	}
	cout << endl;
}

void fillArray(int* ptr, int size) {
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 100 + 1;
	}
}

int* searchElmt(int searchValue, int* pArr, int size) {
	for (int i = 0; i < size; i++)
	{
		//элемент был найден
		if (pArr[i] == searchValue) {
			//возврат адреса найденного элемента
			return &pArr[i];
		}
	}
	return nullptr;
}


int main() {

	/*int a = 10, b = 20;

	//вывод значение переменных
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//вывод адресов переменных
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;

	//объявление указателей (по умолчанию указатели пустые)
	//nullptr - пустота
	int* ptr1 = nullptr;
	int* ptr2 = nullptr;

	cout << "*ptr1 = " << ptr1 << endl;
	cout << "*ptr2 = " << ptr2 << endl;

	//привязка переменной к указателю
	ptr1 = &a;
	ptr2 = &b;

	cout << "*ptr1 = " << ptr1 << endl;
	cout << "*ptr2 = " << ptr2 << endl;

	//Разыменование указателей
	cout << "*ptr1 value = " << *ptr1 << endl;
	cout << "*ptr2 value = " << *ptr2 << endl;

	//Получение размера переменных (в байтах)
	cout << sizeof(a) << " bytes" << endl;
	cout << sizeof(b) << " bytes" << endl;
	cout << sizeof(ptr1) << " bytes" << endl;
	cout << sizeof(ptr2) << " bytes" << endl;

	//передача адреса переменной в функцию
	ex01(&a);
	cout << "a = " << a << endl;

	//получение имени типа указателя
	cout << typeid(ptr1).name() << endl;*/


	/*int a = 10, b = 20;
	customSwap(&a, &b);
	cout << "a = " << a << " b = " << b << endl;*/

	/*const int SIZE = 5;
	int arr[SIZE] = { 10, 20, 30, 40, 50 };

	printArr(arr, SIZE);

	//указатель на массив
	int* ptr = arr;

	cout << arr << endl;
	cout << ptr << endl;

	printArr(ptr, SIZE);


	//Арифметика указателей
	//адрес первого элемента
	cout << *arr << endl;

	//адрес второго элемента
	cout << *(arr + 1) << endl;

	//адрес третьего элемента
	cout << *(arr + 2) << endl;

	//адрес последнего элемента
	cout << *(arr + (SIZE - 1)) << endl;


	//вывод эл-ов
	int counter = 0;
	while (counter < SIZE) {
		cout << *(arr + counter) << " ";
		counter++;
	}
	cout << endl;
	*/

	/*int* ptr = nullptr;

	if (ptr == nullptr) {
		cout << "Empty" << endl;
	}
	else {
		cout << "Not empty" << endl;
	}*/

	const int SIZE = 20;
	int arr[SIZE];

	//заполнение массива случайными числами
	fillArray(arr, SIZE);
	//вывод массива
	printArray(arr, SIZE);


	int* srch = searchElmt(50, arr, SIZE);

	if (srch != nullptr) {
		cout << "Item was found " << *srch << endl;
	}
	else {
		cout << "Item was not found" << endl;
	}


	return 0;
}