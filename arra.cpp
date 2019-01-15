#include <iostream>
using namespace std;
int main (){
char  h  [5] { 'H', 'i', '!', ' ', 'P' };
for (int x = 0; x <= 4; x++){
if (x == 4){
 char * name = & h[4];
 cout << *name << endl;}
else if (x < 4){
 char * name = & h[x];
 cout << *name ;}
  }
return 0;}
