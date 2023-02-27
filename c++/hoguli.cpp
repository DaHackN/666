#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const double g = 6.672E-11;
	const double m = 5.96E24;
	const double r = 6.27E6;
	const double pi = 3.1415;
	
	double T,h;
	
	cout << "Enter T: ";
	cin >> T;
	
	T = T*3600;
	
	h = pow(g*m*T*T/4/pi/pi, (double)1/3)-r;
	h = h/1000;
	
	cout << "Height h = " << h << "km\n";
	
}
