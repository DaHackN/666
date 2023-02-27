/*Контрольная 1 задание 1: "Объявление 3 переменных и выполнение арифметических действий с ними"
  Выполнила Прикотень Анжелика, Группа ИС217*/
  
#include <iostream> //стандартная наша библиотека
#include <clocale> //подлкючение языков
using namespace std;

int main ()
 {
 	setlocale(LC_ALL, "Russian"); //вывод на русском языке
 	
	int a;
	int b;
	int c;
 	
 	cout << "Введите число для А:\n";
 	cin >> a;
 	
 	b = a + 6;
 	c = b + a;
 	 
 	cout << "Занчение Б = " << b << endl;
 	cout << "Значение С = " << c << endl;
 	
 	return 0;
 	
 }
