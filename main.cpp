#include<iostream> 
#include<Windows.h>
#include <conio.h>
#include "NeFloat.h" 
#include "Per.h"



using namespace std;

float cinn()
{
	bool success = false;
	float x;
	while (!success) {
		cin >> x;
		if (cin.good()) success = true;
		else {
			cout << "Значение введено неверно. Повторите ввод" << endl << "Ввод: ";
			cin.clear();
			while (getchar() != '\n');
		}
	}
	return x;
}

void main() {
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251.
	float x;
	char alf[5] = {"+-/*"};
	Per A, b, c;

	cout << " Введите х: ";
	b = cinn();
	cout << " Введите знак (+ - / *): ";
	char zn = _getch();
	while ((!strchr(alf, zn)) || (zn == NULL)) {
		zn = _getch();
	}
	cout << zn << endl;
	cout << " Введите y: ";
	c = cinn();


	cout << endl << " Результат: " << endl;
	b.print();

	switch (zn)
	{
	case '-': 	cout << " - " << endl; A = b - c;
		break;
	case '+': 	cout << " + " << endl; A = b + c;
		break;
	case '/': 	cout << " / " << endl; A = b / c;
		break;
	case '*': 	cout << " * " << endl; A = b * c;
		break;
	default: system("cls"); printf("\n Неверное значение!!! Повторите попытку! \n"); break;
	}
	c.print();
	cout << " =" << endl;
	A.print();

	system("pause");
}