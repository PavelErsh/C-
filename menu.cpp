#include <iostream>
using namespace std;

void input();

int main (){
static int namber;
cin >> namber;
cout <<  input(namber); 
return 0;
}

void input (int namber){
switch (namber){
case '1': cout << "One, great!" << endl; break;
default: 
break;}
}
