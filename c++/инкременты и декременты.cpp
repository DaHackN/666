#include <iostream>
using namespace std;

//программа с опператорами инкремента и декремента

int main()
 {
 	int n, m, i=3, j=3;
 	
 	cout << "At the beginning:\n";
 	cout << "i = " << i << "\n";
 	cout << "j = " << j << "\n";
 	
 	cout << "After command n=i++ : \n";
 	n=i++; //Теперь n=3, i=4
 	cout << "n = " << n << "\n";
 	cout << "i = " << i << "\n";
 	
 	cout << "After command m=++j : \n";
 	m=++j; //m=4, j=4
 	cout << "m = " << m << "\n";
 	cout << "j = " << j << "\n";
 	
 	cout << "After command n=(i--)*(i--) : \n";
 	n=(i--)*(i--); //n=9, i=2
 	cout << "n = " << n << "\n";
 	cout << "i = " << i << "\n";
 	
 	cout << "After command m=(--j)*(--j) : \n";
 	m=(--j)*(--j); //m=4, j=2
 	cout << "m = " << m << "\n";
 	cout << "j = " << j << "\n";
 	
 	cout << "After command n=(--i)*(i++) : \n";
 	n=(--i)*(i++); //n=1, i=2
 	cout << "n = " << n << "\n";
 	cout << "i = " << i << "\n";
 	
 	cout << "After command m=(j--)*(++j) : \n";
 	m=(j--)*(++j); //m=9, j=2
 	cout << "m = " << m << "\n";
 	cout << "j = " << j << "\n";
 	
	cout << "After command n=(--i)*(++i) : \n";
 	n=(--i)*(++i); //n=4, i=2
 	cout << "n = " << n << "\n";
 	cout << "i = " << i << "\n";
 	
 	return 0;
 	 
 }
