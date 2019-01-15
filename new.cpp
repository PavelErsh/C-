#include <iostream>
using namespace std;
int main (){
cout << "Entren namber\n";
int namber;
int sum = 0;
for(int x = 0; ; x++){
cin >> namber;
if (namber == 0){break;}
 sum = namber + sum;
cout << sum << endl;
}
return 0;
}
