/*����������� 1 ������� 1: "���������� 3 ���������� � ���������� �������������� �������� � ����"
  ��������� ��������� ��������, ������ ��217*/
  
#include <iostream> //����������� ���� ����������
#include <clocale> //����������� ������
using namespace std;

int main ()
 {
 	setlocale(LC_ALL, "Russian"); //����� �� ������� �����
 	
	int a;
	int b;
	int c;
 	
 	cout << "������� ����� ��� �:\n";
 	cin >> a;
 	
 	b = a + 6;
 	c = b + a;
 	 
 	cout << "�������� � = " << b << endl;
 	cout << "�������� � = " << c << endl;
 	
 	return 0;
 	
 }
