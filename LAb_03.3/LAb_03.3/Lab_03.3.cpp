// Lab_03_3.cpp
// ������� ������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 7
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
		double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x<=-R)
		y = R;
	else
		if (-R<= x && x <= R)
			y = R - sqrt(R * R - x * x);
	else
		if (R < x && x <= 6)
					y = 3*x + R*x - 9*R / -6 + R;
				else
					y = x-9;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}