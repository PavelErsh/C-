#include <iostream>
using namespace std;
int main (){
int a,b, sum = 0;
cin >> a >> b;
while (a < b){
++a;
sum += a;
}
cout << sum << endl;
return 0;}
