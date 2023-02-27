#include <iostream>
using namespace std;

// Расчет высоты для подъема тела

int main()
 {
 	double v; // Скорость тела
 	double t = 1.2; // Время полета
 	double g = 9.8; // Ускор. свобод. пад.
 	v = 12.3; //Скорость
 	double s=v*t-g*t *t/2; // Высота
 	cout <<"Height level is " << s << "\n";
	 	
 	return 0;
 }
