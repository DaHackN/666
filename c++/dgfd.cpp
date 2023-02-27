#include <iostream>

using namespace std;

int main ()
{
	double a, c;
	const double pi = 3.14;
	
	cout << "¬ведите угол альфа (от 0 до 360 градусов): ";
	cin >> a;
	
	if (a > 360 || a < 0)
	{
		cout << "Ѕыло сказано, от 0 до 360 градусов";
	}
	
	c = a*pi/180;
	
	cout << "ќтвет: " << c;
	

}
