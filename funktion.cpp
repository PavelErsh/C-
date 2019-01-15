#include <iostream>
#include "master.h"
using namespace std;

char c (int);
int b (int);
void output (){
cout << "output function" << endl;
}

int main (){
int a = 1;
cout << "a = " << a << endl;
cout  << "b = "<< b(a) << endl; 
cout  << "a ins ASCI code = "<< c(a) << endl;
return 0;
}
