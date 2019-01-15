#include<iostream>
using namespace std;
double astro (double);
int main(){
double year;
cout << "number years\n ";
cin >> year;
cout << year  << " years = "<< astro(year) << endl;
return 0;
}
double astro(double s){
return s*63240;}
