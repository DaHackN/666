#include <iostream>
#include <clocale>
using namespace std;

int main()
 {
 	setlocale(LC_ALL, "Russian");
 	
 	cout << "Программа сравнения двух введённых чисел.\nВыполнила Анжелика Прикотень, группа ИС217.\n";
 	
 	int a;
 	int b;
 	
 	cout << "Введите число A:" << endl;
 	cin >> a;
 	
 	cout << "Введите число B:" << endl; 
 	cin >> b;
 	

 	
 	cout << "\nСравнение чисел:\n";
 	
 	if (a > b)
 	{
 		cout << "Число A больше B" << endl;
	 }
	else if (a < b)
	{
		cout << "Число A меньше B" << endl;
	}
	else
	{
		cout << "Числа A и B равны" << endl;
	}
 
cout << "\nПроверка чётности чисел:\n";
 	
 	
 	if (a % 2)
 	{
 		cout << "Число A нечётное" << endl;
	 }
	else
	{
		cout << "Число A чётное" << endl;
	}
 	
 	
 	
 	if (b % 2)
 	{
 		cout << "Число B нечётное" << endl;
	 }
	else
	{
		cout << "Число B чётное" << endl;
	}
 	
 	cout << "\nПроверка, больше ли квадрат числа чем 100:\n";

 	
 	if (a*a > 100)
 	{
 		cout << "0\n";
	 }
	else 
	{
		cout << a*a;
	}
 	
 	
 	if (b*b > 100)
 	{
 		cout << "0\n";
	 }
	else 
	{
		cout << b*b << endl;
	}
 	
 	
     cout << "\nВаши первоначально введённые числа: " << a << " " << b << endl; 	
 	
 	
 }
