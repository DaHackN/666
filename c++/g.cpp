#include <iostream>
#include <clocale>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	
	int a,b,c;
	
	cout << "������� ����� � (�� ������ 0)" << endl;
	cin >> a;
	
	if (a == 0)
	{
		cout << "���� �� �������, �� ������� ����.\n";
		cin >> a;
	}
	
	cin >> b;
	
	cout << a <<"� + " << b << " = 0" << endl;
	
	if (b == 0)
	{
		c = -a;
	}
	else
	{
		c = a/(-b);
	}
	
	cout << "�����: " << c;
	
}
