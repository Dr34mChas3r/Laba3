﻿// Визначення квоти податку: Визначити квоту податку в залежності від річного доходу за допомогою оператора if.
//  якщо зарплата <=15000, то податок 19,5%, якщо >15000 <=22500, то податок 22,5%, якщо >22500 <=35000, то податок 23,5%,  якщо >35000, то податок 25%
#include <iostream>

using namespace std;

int main() {

	double salary;
	double tax;

	cout << "Введіть розмір зарплатні: " << endl;
	cin >> salary;

	if (salary <= 15000) 
	{
		tax = salary * 0.195;
	}
	else if (salary > 15000 && salary <= 22500) 
	{
		tax = salary * 0.225;
	}
	else if (salary > 22500 && salary <= 35000) 
	{
		tax = salary * 0.235;
	}
	else if (salary > 35000) 
	{
		tax = salary * 0.25;
	}
	else cout << "Виникла помилка. Перевірте вхідні дані.";

	cout << "Податок становить: " << tax << endl;
}