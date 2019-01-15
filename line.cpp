#include <iostream>
using namespace std;
double mors_mile(  double &a);
double douim( double & b);
double fut(  double &s);
double ya(  double &d);
double mile(  double &f);

int main(void){
cout << "Ведите сантиметры\n";
double santim;
cin >> santim;
cout << "Ведите индекс величны в которую переводите\n";
cout << "Морская миля (a)\n";
cout << "Дюйм (d)\n";
cout << "Фунт (f)\n";
cout << "Ярд (y)\n";
cout << "Миля (m)\n";
char index;
cin >> index;
int ascii_index = int(index);
switch(ascii_index){
case 97:
cout <<  mors_mile(santim) << " Морских миль" << endl;
break;
case 100:
cout <<  douim(santim) << " Дюймов\n";
break;
case 102:
cout <<  fut(santim) << " Фунтов\n";
break;
case 121:
cout <<  ya(santim) << " Ярдов\n";
MQFVLtfPygrw
break;
case 109:
cout <<  mile(santim) << " Миль\n";
break;}
}

double mors_mile( double &a){
 return a / 1000;
}
double douim( double &b){
 const double bo = 0.3937;
  return  b / bo;
}
double fut( double &s){
 const double fom = 0.03280;
  return  s / fom;
}
double ya( double &d){
 const double ya = 0.011093;
 return   d / ya;
}
double mile( double &f){
 const double mi = 2000;
 return  f / mi;
}
