// Lab_03_4.cpp
// Лукічова Катерина
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12
#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	double x;  // вхідний аргумент
	double y;  // вхідний параметр
	double R;
	cout << "x="; cin >> x; cout << "y="; cin >> y; cout << "R="; cin >> R;
	// розгалуження в повній формі
	if ((y>= 0 && y <= R && x <= 0 && x >= -R && (x + R)*(x + R) + (y - R)*(y - R) >= R*R) || (x >= 0 && x <= R && y <= 0 && y >= -R && (x - R)*(x - R) + (y + R)*(y + R) >= R*R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin >> x;
	return 0;
}

