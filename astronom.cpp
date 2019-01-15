#include <iostream>
using namespace std;
double unit (double);
int main (){
cout << "Enter the number of light year: " ;
double year;
cin >> year;
cout << endl;
cout << year << " light years  = " << unit(year) 
 << " astronomical units" << endl;
return 0; }
double unit (double year){
return year * 63240;}
