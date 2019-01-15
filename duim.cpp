#include <iostream>
using namespace std;
int main (void){
const double fut = 0.0833333;
cout << "Enter duim ";
double duim;
cin >> duim;
long double result = fut * duim;
cout << "Result " << result << endl;
return 0;
}
