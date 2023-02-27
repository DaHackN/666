#include <iostream>

using namespace std;

int main ()
{
    int a, b, c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a>b, a>c, b>c)
    {
      a *= 2;
      b *= 2;
      c *= 2;
      
      cout << a << " " << b << " " << c;        
    }
    else
    {
        a *=-1;
        b *=-1;
        c *=-1;
        
        cout << a << " " << b << " " << c;
    }
    
}