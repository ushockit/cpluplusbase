#include <iostream>
using namespace std;


int main() {

	// -= ���� FOR =-
	/*
		for (���������� ��������; �������; ��� ��������) {
			...���� �����
		}
	*/

	//����� �������� �� 1 �� 10
	/*for (int i = 1; i <= 10; i++) {
		//cout << i << endl;
		cout << i << " ";
	}
	cout << endl;*/

	//����� �������� �� 0.0 �� 2.0
	/*for (double i = 0.0; i < 2.1; i += 0.1) {
		cout << i << " ";
	}
	cout << endl;*/

	//����� �������� �� 10 �� 1
	/*for (int i = 10; i >= 1; i--) {
		cout << i << " ";
	}
	cout << endl;*

	
	//����� �������� � �������� ������������� ���������
	/*int start, end;

	cout << "start: ";
	cin >> start;

	cout << "end: ";
	cin >> end;


	for (int i = start; i <= end; i++) {
		cout << i << " ";
	}
	cout << endl;*/

	//����� �� �����
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
		//����� ������� 5�
		if (i % 5 == 0) {
			//����� �� �����
			break;
		}
	}
	cout << endl;

	//������� � ��������� �������� (������� ��������)
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		if (i % 7 == 0) {
			//������� � ��������� �������� (������� ���� �����, ������� ���� ����)
			continue;
		}

		if (i % 2 == 0) {
			cout << "-= " << i << " =-" << endl;
		}
		else {
			cout << "=-" << i << " -=" << endl;
		}
		//�����-�� ��������
		sum += i;
	}


	system("pause");
	return 0;
}