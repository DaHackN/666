#include <iostream>
using namespace std;

int main ()
 {
 	int first;
 	int second;
 	
 	cout <<"Enter first number and second \n";
 	cin >> first;
 	cin >> second;
 	
 	float intFirst = first;
 	float intSecond = second;
 	float regularResult = intFirst / intSecond;
 	
 	cout <<"\nRESULT!\n";
	cout <<"\nRegular answer: 	" << regularResult << "\n";
 	
 	
 	int result = first / second;
 	cout <<"INT part = 		" << result << "\n";
 	
 	float intResult = result;
 	float fractional = regularResult - intResult;
 	cout <<"Fractional part = 	" << fractional << "\n";
 	
 	int div = first%second;
 	cout <<"DIV = 			" << div << "\n";
 	
 	return 0;
 	
 	
 	}
