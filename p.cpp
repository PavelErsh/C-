
#include <iostream>
using namespace std;
int main (){
int * pt = new int;
*pt = 1;
cout << "one "<< *pt << " adress " << &pt << endl;
double * pt = new double;
*pt = 2.7;
cout << "past " << *pt;
return 0;
}
