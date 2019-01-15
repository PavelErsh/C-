#include <iostream>
using namespace std;
double faren (double);
int main (void){
cout << "Plese enter a Celsius value: ";
double celsius;
cin >> celsius;
cout << endl;
cout << celsius << " degrees Celsius is " << faren (celsius) << " farengate " << endl;
return 0;
}
double faren (double celsius)
{
 return 1.8 * celsius + 32; 
}
