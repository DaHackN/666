#include <iostream>
#include <clocale>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	
	double a, c;
	const double pi = 3.14;
	
	cout << "������� ���� ����� (�� 0 �� 360 ��������): ";
	cin >> a;
	
	if (a > 360 || a < 0)
	{
		cout << "���� �������, �� 0 �� 360 ��������";
	}
	
	c = a*180/pi;
	
	cout << "�����: " << c;
	
	
	
}
