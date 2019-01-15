#include <iostream>
using namespace std;
double garmonic (double, double);
int main (){
  double a;
  double b;
  cout << "Введите два числа\n";
  cin >> a >> b;
  if (a != 0 && b != 0) {
  cout << garmonic( a, b) << endl;}
  if (a == 0 || b == 0) {
    cout << "Error!\n";
  }
  return 0;
}
  double garmonic (double a, double b){
   double cisl = 2.0 * a *b;
   double znamen = a + b;
   return (cisl / znamen);
 }
