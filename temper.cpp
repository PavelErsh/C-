#include <iostream>
using namespace std;
double far(double);
int main(){
double cels;
cout << "Enter temp";
cin >> cels;
cout << cels  << " temp " << far(cels) << " frarengete\n ";
}
double far(double c){
return 1.8*c+32;
}
