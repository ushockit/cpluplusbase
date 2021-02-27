#include <iostream>

using namespace std;

enum MenuAction {
	Login = 1,
	Register = 2,
	Exit = 4,
	ResetPassword = 3
};


int main() {
	/*int action;

	cout << "[1] Action 1" << endl;
	cout << "[2] Action 2" << endl;
	cout << "[3] Action 3" << endl;
	cout << "[4] Action 4" << endl;
	cin >> action;

	switch (action) {
	case 1:
		cout << "Selected action 1" << endl;
		break;
	case 2:
		cout << "Selected action 2" << endl;
		break;
	case 3:
		cout << "Selected action 3" << endl;
		break;
	case 4:
		cout << "Selected action 4" << endl;
		break;
	default:
		cout << "Another action" << endl;
	}*/


	

	//Winter, Spring, Summer, Autumn
	/*
	int month;

	cout << "Month: ";
	cin >> month;

	//Проверка на вхождение в диапазон от 1 до 12
	if (month >= 1 && month <= 12) {
		switch (month) {
		case 12:
		case 1:
		case 2:
			cout << "Winter" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "Spring" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "Summer" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "Autumn" << endl;
			break;
		}
	}
	else {
		cout << "Failure" << endl;
	}*/

	/*
	
	int month;
	
	cout << "Enter month: ";
	cin >> month;
	
	//Проверка на вхождение в диапазон от 1 до 12
	if (month >= 1 && month <= 12) {
		switch (month) {
		case 1:
			cout << "January" << endl;
			break;
		case 2:
			cout << "February" << endl;
			break;
		case 3:
			cout << "Martch" << endl;
			break;
		case 4:
			cout << "April" << endl;
			break;
		case 5:
			cout << "May" << endl;
			break;
		case 6:
			cout << "June" << endl;
			break;
		case 7:
			cout << "July" << endl;
			break;
		case 8:
			cout << "August" << endl;
			break;
		case 9:
			cout << "Semptember" << endl;
			break;
		case 10:
			cout << "October" << endl;
			break;
		case 11:
			cout << "November" << endl;
			break;
		case 12:
			cout << "December" << endl;
			break;
		}
	}
	else {
		cout << "Month does not exists" << endl;
	}*/

	
	/*char symb;
	cout << "Symb: ";
	cin >> symb;


	if (symb == 'y' || symb == 'Y') {
		cout << "y or Y" << endl;
	}
	else if (symb == 'q' || symb == 'Q') {
		cout << "q or Q" << endl;
	}
	else if (symb == 'n' || symb == 'N') {
		cout << "n or N" << endl;
	}

	switch (symb) {
	case 'y':
	case 'Y':
		cout << "y or Y" << endl;
		break;
	case 'q':
	case 'Q':
		cout << "q or Q" << endl;
		break;
	case 'n':
	case 'N':
		cout << "n or N" << endl;
		break;
	}*/

	// -= Enum =-
	int action;

	cout << "[1] Login" << endl;
	cout << "[2] Register" << endl;
	cout << "[3] Reset password" << endl;
	cout << "[4] Exit" << endl;
	cin >> action;
	

	double b = 5.67;
	const float PI = 3.14;
	double c = PI * (b * b);

	/*const int LOGIN = 1;
	const int REGISTER = 2;
	const int RESET_PASSWORD = 3;
	const int EXIT = 4;*/


	switch (action) {
	case Login:

		break;
	case Register:

		break;
	case ResetPassword:

		break;
	case Exit:

		break;
	}


	return 0;
}