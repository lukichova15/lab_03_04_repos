// Lab_03_4.cpp
// ������� ��������
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 12
#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	double x;  // ������� ��������
	double y;  // ������� ��������
	double R;
	cout << "x="; cin >> x; cout << "y="; cin >> y; cout << "R="; cin >> R;
	// ������������ � ����� ����
	if ((y>= 0 && y <= R && x <= 0 && x >= -R && (x + R)*(x + R) + (y - R)*(y - R) >= R*R) || (x >= 0 && x <= R && y <= 0 && y >= -R && (x - R)*(x - R) + (y + R)*(y + R) >= R*R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin >> x;
	return 0;
}

