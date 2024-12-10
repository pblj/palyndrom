#include <iostream>
#include <string>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i, length, inputNumber;
	string inputNumber_str, reverseNumber_str;
	char digit;

	cout << "����� ���������� � ��������� ������������ �������� �� ��������� ����� �����������. \n��� ������ �� ��������� ������� exit." << endl;
	do {

		cout << "������� �����:"; cin >> inputNumber_str;
		
		if (!inputNumber_str.compare("exit")) { break; }

		try
		{
			inputNumber = stoi(inputNumber_str);
		}
		catch (...)
		{
			cout << "��������� �� ����� �������� �� ��������, ��������� ���� �����!" << endl;
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
			cout << "����� �������� �����������." << endl;
		}
		else {
			cout << "����� �� �������� �����������." << endl;
		}

	} while (true);

}