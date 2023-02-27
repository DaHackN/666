#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
 	cout << "Введите значения для внешнего радиуса R1 и для внутреннего радиуса R2";
 	int R1;
 	int R2;

	cin >> R1 >> R2;
 	
 	int S = M_PI*((pow(R1,2))-(pow(R2,2)));
 	cout << "Площадь кольца равна " << S;
 	
 	return 0;
 }
