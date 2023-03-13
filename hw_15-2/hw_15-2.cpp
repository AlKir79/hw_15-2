// hw_15-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Задание 2. Написать функцию, которая удаляет из строки 
// все вхождения в нее заданного символа.

#include <iostream>
#include<string>
using namespace std;

void inputStr(char* mes)
{

	cout << "Enter string ";
	cin >> mes;
}

void inputSym(char& sym)
{
	cout << endl;
	cout << "Enter symbol, that must be delete ";
	cin >> sym;
}
void outputStr(char* mes)
{
	cout << mes;
}

void func(char* mes, char sym, char* mes_new)
{
	int k = 0;
	for (size_t i = 0; i < strlen(mes); i++)
	{
		if (mes[i] == sym) continue;
		mes_new[k] = mes[i];
		k++;
	}
	mes_new[k] = '\0';
}

int main()
{
	char sym;
	char* pmes = new char;
	char* pmes_new = new char;
	inputStr(pmes);
	inputSym(sym);
	func(pmes, sym, pmes_new);
	outputStr(pmes_new);
}

