#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main ()
 {
 	setlocale(LC_ALL, "Russian");
 	cout <<"��������� ������ ��������� ����, ���������� ��� �����.\n��������� �������� ���������, ������ ��217" << endl;
 	
 	//��������� - ��������� ���������� ������� � ����� pi:
 	const double g = 9.8;
 	const double pi = 3.1415;
 	
 	/*��������� � ���������� ��������� ������
 	(��������, ���� � ����� ������*/
 	double v, alpha, T;
 	//������ ������� � ����������
 	double t, x, y;
 	
 	//���� ����������
 	cout << "������� �������� v = ";
 	cin >> v;
 	
 	cout << "������� ���� alpha = ";
 	cin >> alpha;
 	
 	alpha = alpha * pi / 180;
 	
 	T = 2 * v * sin(alpha) / g;
 	
 	cout << "������� ����� t < << "<<T<<" :";
 	cin >> t;
 	
 	x = v * t * cos(alpha);
 	y = v * t * sin(alpha) - g * t * t / 2;
 	
 	cout << "x = " << x << "\n";
 	cout << "y = " << y << "\n";
 	
 	return 0;
 	
 }
