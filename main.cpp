#include <iostream>
#include <variant>

using namespace std;

double multiplication(double num1, double num2);
double divide(double num1, double num2);
double subtraction(double num1, double num2);
double addition(double num1, double num2);

int main() {
	setlocale(LC_ALL, "ru");
	double num1, num2;
	int operacion;
	cout << "Привет. Выбери действие" << endl;
	cout << "1. Умножение." << endl;
	cout << "2. Деление." << endl;
	cout << "3. Вычитание." << endl;
	cout << "4. Сложение." << endl;
	while (true) {
		cin >> operacion;
		switch (operacion)
		{
		case 1:
			cout << "Введи два числа для выполнения действия: ";
			cin >> num1 >> num2;
			cout << multiplication(num1, num2) << " - результат операции" << endl;
			break;
		case 2:
			cout << "Введи два числа для выполнения действия: ";
			cin >> num1 >> num2;
			if (num1 == 0 && num2 == 0) return 5;
			else cout << divide(num1, num2) << " - результат операции" << endl;
			break;
		case 3:
			cout << "Введи два числа для выполнения действия: ";
			cin >> num1 >> num2;
			cout << subtraction(num1, num2) << " - результат операции" << endl;
			break;
		case 4:
			cout << "Введи два числа для выполнения действия: ";
			cin >> num1 >> num2;
			cout << addition(num1, num2) << " - результат операции" << endl;
			break;
		default:
			cout << "Введи правильный номер действия!" << endl;
			continue;
		}
	}
}

double multiplication(double num1, double num2) {
	return num1 * num2;
}

double divide(double num1, double num2) {
	return num1 / num2;
}

double subtraction(double num1, double num2) {
	return num1 - num2;
}

double addition(double num1, double num2) {
	return num1 + num2;
}
