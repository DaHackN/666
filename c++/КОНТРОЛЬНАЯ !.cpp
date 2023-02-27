#include <iostream> \\lfkdls
#include <clocale>
using namespace std;

int main ()
 {
 	setlocale(LC_ALL, "Russian");
 	
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
