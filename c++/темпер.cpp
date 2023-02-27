#include <iostream>
#include <clocale>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	
	double tf,tc;
	
	cout << "Введите температуру в Фаренгейтах: ";
	cin >> tf;
	
	tc = (tf - 32) * 5 / 9;
	
	cout << "Температура в Цельсиях: " << tc;
	
	
}
