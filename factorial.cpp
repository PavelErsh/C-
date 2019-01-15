#include <iostream>
using namespace std;
int main (){
int a = 0;
 cout << "factorial\n";
 for (int x = 1; x < 10; x++, a++ )

    {
     int factorial = x * a;
     int r = factorial * a;
     cout << r << '\n';
   }
return 0;
}
