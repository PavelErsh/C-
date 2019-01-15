#include <iostream>
#include "rab.h"
extern int out ();
extern int sum ();

using namespace std;
int main (void){
cout << "Введите число\n" << endl;
int b;
cin >> b;
char a = 0;
cout << "Введите символ\n" << endl;
while (a != 'q'){
cin >> a;
switch (a){
case 'a': cout << sum(b) << endl; break;
case 'b': cout << out(b) << endl; break;}
}
return 0;}
