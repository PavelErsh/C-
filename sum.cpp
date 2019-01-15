#include <iostream>
using namespace std;

int main (){
int b;
int sum;
for (int a = 1; a < 6; a ++){
 cout << "Namer " << a <<  endl;
 cin >> b;
 sum += b;
}
cout << sum << endl;
return 0;
}
