#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
 	cout << "������� �������� ��� �������� ������� R1 � ��� ����������� ������� R2";
 	int R1;
 	int R2;

	cin >> R1 >> R2;
 	
 	int S = M_PI*((pow(R1,2))-(pow(R2,2)));
 	cout << "������� ������ ����� " << S;
 	
 	return 0;
 }
