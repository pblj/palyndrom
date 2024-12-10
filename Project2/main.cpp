#include <iostream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i, length, inputNumber;
	string inputNumber_str, reverseNumber_str;
	char digit;

	cout << "Добро пожаловать в программу определяющую является ли введенное число палиндромом. \nДля выхода из программы введите exit." << endl;
	do {

		cout << "Введите число:"; cin >> inputNumber_str;
		
		if (!inputNumber_str.compare("exit")) { break; }

		try
		{
			inputNumber = stoi(inputNumber_str);
		}
		catch (...)
		{
			cout << "Программа не может работать со строками, повторите ввод числа!" << endl;
			continue;
		}
		

		reverseNumber_str = "";
		length = inputNumber_str.size();
		for (i = length - 1; i >= 0; i--)
		{
			digit = inputNumber_str[i];
			reverseNumber_str = reverseNumber_str + digit;
		}

		if (!inputNumber_str.compare(reverseNumber_str)) {
			cout << "Число является палиндромом." << endl;
		}
		else {
			cout << "Число не является палиндромом." << endl;
		}

	} while (true);

}