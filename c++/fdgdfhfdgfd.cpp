#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
 	setlocale(LC_ALL, "Russian");
 	
 	int a,b,c,d,x,x1,x2;
 	
 	cout << "¬ведите число a, не равное 0: " ;
 	cin >> a;
 	
 	if (a == 0)
 	{
 		cout << "Ѕыло сказано, не равное 0. ¬ведите другое значение дл€ числа а";
 		cin >> a;
	 }
	 
	 cin >> b;
	 cin >> c;
	 
	 d = b*b - 4*a*c;
	 cout << d;
	 
	 
	 if (d == 0)
	 {
	 	x = (b-(pow(b,2))) / (2*a);
 		cout <<"X = " << x;
	 }
	 else if (d > 0)
	 {
	 	x1 = ( (-b - sqrt(x))/ 2*a );
		x2 = ( (-b + sqrt(x))/ 2*a );
		cout <<"X1 = " << x1 << endl;
		cout <<"X2 = " << x2 << endl;
		
	 }
	 else
	 {
	 	cout << "ƒискриминант меньше 0, программа обрываетс€.";
	 }
	
 	
}
