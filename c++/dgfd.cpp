#include <iostream>

using namespace std;

int main ()
{
	double a, c;
	const double pi = 3.14;
	
	cout << "������� ���� ����� (�� 0 �� 360 ��������): ";
	cin >> a;
	
	if (a > 360 || a < 0)
	{
		cout << "���� �������, �� 0 �� 360 ��������";
	}
	
	c = a*pi/180;
	
	cout << "�����: " << c;
	

}
