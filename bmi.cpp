#include <iostream>
#include <cmath>
using namespace std;
int main(){
cout << "Ведите свой рост\n";
 double rost;
cin >> rost;
double rost_past = rost/100;
cout << "Ведите срой вес\n";
 double ves;
cin >> ves;
double bmi =ves/(rost_past*rost_past);
cout << "Ваш вес " << ves << "\n"; 
cout <<  "Ваш рост " << rost << "\n";
cout << "Ваш BMI " << bmi<< endl;
return 0;
}
