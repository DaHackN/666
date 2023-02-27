//ввести с клавы макс. возмож. переменную, должно отобразиться как все переменные
#include <iostream>
using namespace std;

int main()
 {
 	int a;
 	cin >> a;
 	
 	short sh = a;
 	cout <<"short int = " << sh << "\n";
 	
 	double d = a;
 	cout <<"double = " << d << "\n";
 	
 	float f = a;
 	cout <<"float = " << f << "\n";
 	
 	char ch = a;
 	cout <<"char = " << ch << "\n";
 	
 	long l = a;
 	cout <<"long = " << l << "\n";
 	
 	unsigned int ui = a;
 	cout <<"unsigned int = " << ui << "\n";
 	
 	unsigned long ul = a;
 	cout <<"unsigned long = " << ul << "\n";
 	
 	unsigned short ush = a;
 	cout <<"unsigned short = " << ush << "\n";
 	
 	bool b = a;
 	cout <<"bool = " << b << "\n";
 	
 	wchar_t wch = a;
 	cout <<"wchar_t = " << wch << "\n";
 	
     return 0;
 }
 
