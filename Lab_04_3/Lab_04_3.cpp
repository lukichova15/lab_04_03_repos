// Lab_04_3.cpp
// ������� ��������
// ����������� ������ No 4.3
// ��������� �������, ������ ��������: ������� � �����������
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "a = "; cin >> a; // ������� ��������
	cout << "b = "; cin >> b; // ������� ��������
	cout << "c = "; cin >> c; // ������� ��������
	cout << "xp = "; cin >> xp; // � ���������
	cout << "xk = "; cin >> xk; // � ������
	cout << "dx = "; cin >> dx; // ����
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |   "
		<< setw(7) << "F" << " |    " << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0.6 && b + c != 0)
			F = a*x*x + b*b + c;
		else
		if (x > 0.6 && b + c == 0)
			F = (x - a) / (x - c);
		else
			F = x / c + x / a;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	cin >> dx;
	return 0;
}
