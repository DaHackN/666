#include <iostream>
using namespace std;

int main()
{
	int a;
	int h;
	
	cout <<"введите длину стороны тр-ка и её высоту";
	cin >> a;
	cin >> h;
	
	int s = a*h/2;
	cout << s;
	
	return 0;
}