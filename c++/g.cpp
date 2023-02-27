#include <iostream>
#include <clocale>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	
	int a,b,c;
	
	cout << "Введите число А (не равное 0)" << endl;
	cin >> a;
	
	if (a == 0)
	{
		cout << "Было же сказано, не вводить ноль.\n";
		cin >> a;
	}
	
	cin >> b;
	
	cout << a <<"х + " << b << " = 0" << endl;
	
	if (b == 0)
	{
		c = -a;
	}
	else
	{
		c = a/(-b);
	}
	
	cout << "Ответ: " << c;
	
}
