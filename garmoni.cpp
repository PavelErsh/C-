#include <iostream>
using namespace std;
double garmon (double, double);

int main (){
cout << "Enter two nambers\n";
double x, y;
while (cin >> x >> y){
  if (x == 0 || y == 0){
  cout << "Namber = 0\n";
  break;
  }
 if (x != 0 and y !=0){
cout <<  garmon (x, y) << endl; }
}
return 0;
}
double garmon (double x, double y){
return 2.0 * x * y / (x + y);
}
