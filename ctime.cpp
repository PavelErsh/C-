#include<iostream>
using namespace std;
void output (int, int);
int main (){
cout << "Enter the number of hours: ";
int hour;
cin >> hour;
cout << "Enter the number of minutes: ";
int minut;
cin >> minut;
output (hour, minut);
return 0;}
void output (int hour, int minut){
cout << hour << ":" << minut << endl;
}
