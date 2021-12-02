#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // использование рандомных чисел
#include <ctime>
using namespace std;
void rules();
int main()
{
	setlocale(LC_ALL, "Rus");
	string playerName;
	int balance; // история баланса игрока
	int bettingAmount;
	int guess;
	int dice; // рандомное число
	char choice;
	srand(time(0)); // рандомный генератор
	cout << "\n\t\t========ДОБРО ПОЖАЛОВАТЬ В МИРОВОЕ КАЗИНО=======\n\n";
	cout << "\n\nВВЕДИТЕ ВАШЕ ИМЯ:: ";
	getline(cin, playerName);
	cout << "\n\nНАПИШИТЕ ВАШ НАЧАЛЬНЫЙ БАЛАНС: $";
	cin >> balance;
	do
	{
		system("cls");
		rules();
		cout << "\n\nВАШ ТЕКУЩИЙ БАЛАНС СОСТАВЛЯЕТ $ " << balance << "\n";
		// Баланс игрока
		do
		{
			cout << "ПРИВЕТ, " << playerName << ", ВВЕДИТЕ СУММУ ДЛЯ СТАВКИ : $";
			cin >> bettingAmount;
			if (bettingAmount > balance);
				cout << "\nБАЛАНС СТАВКИ НЕ МОЖЕТ БЫТЬ БОЛЬШЕ ТЕКУЩЕГО БАЛАНСА"<< "\n ВВЕДИТЕ БАЛАНС ЗАНАВО: $\n ";
		} while (bettingAmount > balance);
		// Номер игрока
		do
		{
			cout << "ПОПРОБУЙ УГАДАТЬ ЧИСЛО ОТ 1 ДО 10:";
			cin >> guess;
			if (guess <= 0 || guess > 10)
				cout << "\nЧИСЛО ДОЛЖНО БЫТЬ ОТ 1 ДО 10, Я ЖЕ ПРЕДУПРЕДИЛ!\n" << "ВВЕДИТЕ ЧИСЛО СНОВА:\n ";
		} while (guess <= 0 || guess > 10);
		dice = rand() % 10 + 1;
		if (dice == guess)
		{
			cout << "\n\nПОЗДРАВЛАЮ! ТЫ ВЫЙГРАЛ!." << bettingAmount * 10;
			balance = balance + bettingAmount * 10;
		}
		else
		{
			 cout << "УПС, НЕ ПРАВИЛЬНО, НЕ РАССТРАИВАЙСЯ В СЛЕДУЮЩИЙ РАЗ ПОВЕЗЕТ!"" << bettingAmount << ""\n";
				; balance = balance - bettingAmount;
		}
		26;
		; cout << "\nВЫЙГРЫШНЫМ НОМЕРОМ БЫЛ : " << dice << "\n";
		; cout << "\n" << playerName << ", ТВОЙ БАЛАНС $ " << balance << "\n";
		if (balance == 0)
		{
			cout << "У ВАС ЗАКОНЧИЛАСЬ ВАЛЮТЫ, ЧТО БЫ ИГРАТЬ ";
			break;
		}
		cout << "\n\n-->ХОЧЕШЬ СЫГРАТЬ ЕЩЕ РАЗ? (y/n)? ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	cout << "\n\n\n";
	cout << "\n\nТВОЙ БАЛАНС РАВЕН: $ " << balance << "\n\n";
	return 0;
}
void rules()
{
	system("cls");
	cout << "\t\t======ДОБРОЙ ПОЖАЛОВАТЬ,ПРАВИЛА КАЗИНО!======\n";
	cout << "\t1. ВВОДИТЬ ЧИСЛА ОТ 1 ДО 10\n";
	cout << "\t2. ПОБЕДИТЕЛЬ ПОЛУЧИТ 10 КРАТНУЮ СУММУ СТАВКИ\n";
	cout << "\t3. НЕПРЕЕМЛЕМНАЯ СТАВКА И ВЫ ПОТЕРЯЕТЕ СУММУ ИЗ СВОЕГО БАЛАНСА\n\n";
}
