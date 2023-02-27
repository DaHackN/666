// Программа сложения, показывающий сумму 2 целых чисел
#include <iostream>
using namespace std;

int main()
 {
 	int num1; //первое из складыванмых чисел
 	int num2; //второе их складываемых чисел
 	int sum; //сумма 1 и 2 числа
 	int dif;
 	int divis;
 	int prod;
 	int ostatok;
 	
 	
 	cout << "Enter first number "; //запрос данных
 	cin >> num1; //написать 1-е число в намбер1
 	
 	cout << "Enter second number "; //запрос данных
 	cin >> num2; //написать 2-е число в намбер1
 	
 	sum = num1 + num2; //сложить 2 числа: записать сумму в сум
 	dif = num1 - num2;
 	ostatok = num1 % num2;
 	divis = num1 / num2;
 	prod = num1 * num2;
 	
 	
 	cout <<"Sum is\t\t" << sum << endl; //вывести сумму
 	cout <<"Difference is\t" << dif << endl;
 	cout <<"Ostatok is\t" << ostatok << endl;
 	cout <<"Division is\t" << divis << endl;
 	cout <<"Product is\t" << prod << endl;
 	
 	
 	// вопрос 1 - как закомментить строку и расскомменить
 	// вопрос 2 - какая самая маленькая будет работать на с++
 	// вопрос 3 - для чего нужен ретёрн 0
 	
 	return 0; //показывает успешное завершение программы
 	
 }

