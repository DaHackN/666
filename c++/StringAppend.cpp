#include <iostream>
#include <string>
using namespace std;



int main()
 {
 	string UserFirstName;
 	string UserLastName;
 	
 	cout <<"Please enter your first name: ";
 	cin >> UserFirstName;
 	
 	cout <<"Pleae enter your second name: ";
 	cin >> UserLastName;
 	
 	string UserFullName;
 	UserFullName = UserFirstName + UserLastName;
 	
 	cout <<"Your name is: " << UserFullName << "\n";
	  
 	return 0;
 	
 }
