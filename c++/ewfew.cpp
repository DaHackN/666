#include <iostream>
#include <clocale>
using namespace std;

int main()
 {
 	setlocale(LC_ALL, "Russian");
 	
 	cout << "��������� ��������� ���� �������� �����.\n��������� �������� ���������, ������ ��217.\n";
 	
 	int a;
 	int b;
 	
 	cout << "������� ����� A:" << endl;
 	cin >> a;
 	
 	cout << "������� ����� B:" << endl; 
 	cin >> b;
 	

 	
 	cout << "\n��������� �����:\n";
 	
 	if (a > b)
 	{
 		cout << "����� A ������ B" << endl;
	 }
	else if (a < b)
	{
		cout << "����� A ������ B" << endl;
	}
	else
	{
		cout << "����� A � B �����" << endl;
	}
 
cout << "\n�������� �������� �����:\n";
 	
 	
 	if (a % 2)
 	{
 		cout << "����� A ��������" << endl;
	 }
	else
	{
		cout << "����� A ������" << endl;
	}
 	
 	
 	
 	if (b % 2)
 	{
 		cout << "����� B ��������" << endl;
	 }
	else
	{
		cout << "����� B ������" << endl;
	}
 	
 	cout << "\n��������, ������ �� ������� ����� ��� 100:\n";

 	
 	if (a*a > 100)
 	{
 		cout << "0\n";
	 }
	else 
	{
		cout << a*a;
	}
 	
 	
 	if (b*b > 100)
 	{
 		cout << "0\n";
	 }
	else 
	{
		cout << b*b << endl;
	}
 	
 	
     cout << "\n���� ������������� �������� �����: " << a << " " << b << endl; 	
 	
 	
 }
