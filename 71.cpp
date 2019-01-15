#include<iostream>
using namespace std;
double garmon (int, int);
int main (){
int a;
int b;
while (cin >> a >> b ){
  if (a != 0 and b != 0){
cout << garmon ( a,  b) << endl; }
if (a == 0 or b == 0){
  cout << "Error\n";}
}
return 0; }
double garmon (int a, int b){
  double cisl = 2.0 * a * b;
  double znam = a + b;
  return cisl / znam;
}
