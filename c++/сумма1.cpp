// ��������� ��������, ������������ ����� 2 ����� �����
#include <iostream>
using namespace std;

int main()
 {
 	int num1; //������ �� ������������ �����
 	int num2; //������ �� ������������ �����
 	int sum; //����� 1 � 2 �����
 	int dif;
 	int divis;
 	int prod;
 	int ostatok;
 	
 	
 	cout << "Enter first number "; //������ ������
 	cin >> num1; //�������� 1-� ����� � ������1
 	
 	cout << "Enter second number "; //������ ������
 	cin >> num2; //�������� 2-� ����� � ������1
 	
 	sum = num1 + num2; //������� 2 �����: �������� ����� � ���
 	dif = num1 - num2;
 	ostatok = num1 % num2;
 	divis = num1 / num2;
 	prod = num1 * num2;
 	
 	
 	cout <<"Sum is\t\t" << sum << endl; //������� �����
 	cout <<"Difference is\t" << dif << endl;
 	cout <<"Ostatok is\t" << ostatok << endl;
 	cout <<"Division is\t" << divis << endl;
 	cout <<"Product is\t" << prod << endl;
 	
 	
 	// ������ 1 - ��� ������������ ������ � �������������
 	// ������ 2 - ����� ����� ��������� ����� �������� �� �++
 	// ������ 3 - ��� ���� ����� ����� 0
 	
 	return 0; //���������� �������� ���������� ���������
 	
 }

