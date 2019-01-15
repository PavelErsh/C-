#include <iostream>
int main (void){
using std::cout;
using std::cin;
using std::endl;
double x;
cout << "Enter value: ";
while (!(cin>>x))
{
cout << "Bad input. Place enter a number:";
cin.clear();
while (cin.get() !='\n')
   continue;
}
cout << "Vallue =" << x << endl;
return 0;
}

