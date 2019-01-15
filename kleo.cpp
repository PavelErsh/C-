#include<iostream>
using namespace std;
int main (){
double Dafna = 100.0;
double Kleo = 100.0;
int scet  = 1;
for (int a = 1; Kleo < Dafna; a++){
 Dafna +=(Dafna * 0.1); 
 Kleo+=(Kleo * 0.05);
scet++
cout << scet << " " <<  Dafna << " "<< Kleo << endl;
}
return 0;
}
