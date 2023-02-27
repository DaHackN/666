#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main ()
 {
 	setlocale(LC_ALL, "Russian");
 	cout <<"Программа вывода координат тела, брошенного под углом.\nВыполнила Анжелика Прикотень, группа ИС217" << endl;
 	
 	//Константа - ускорение свободного падения и число pi:
 	const double g = 9.8;
 	const double pi = 3.1415;
 	
 	/*Начальные и рассчётные параметры задачи
 	(скорость, угол и время полета*/
 	double v, alpha, T;
 	//Момент времени и координаты
 	double t, x, y;
 	
 	//Ввод параметров
 	cout << "Введите скорость v = ";
 	cin >> v;
 	
 	cout << "Введите угол alpha = ";
 	cin >> alpha;
 	
 	alpha = alpha * pi / 180;
 	
 	T = 2 * v * sin(alpha) / g;
 	
 	cout << "Введите время t < << "<<T<<" :";
 	cin >> t;
 	
 	x = v * t * cos(alpha);
 	y = v * t * sin(alpha) - g * t * t / 2;
 	
 	cout << "x = " << x << "\n";
 	cout << "y = " << y << "\n";
 	
 	return 0;
 	
 }
