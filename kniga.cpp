#include <iostream>
using namespace std;
int main (){
string mounth [12] {
"Junaru",
 "Fabruary",
 "March",
"April",
"May",
"June",
 "July",
 "August",
"September",
 "October",
 "November",
 "December"};
int sail [12];
int sum = 0;
for (int x = 0; x < 12; x ++){
cout << mounth [x] << endl;
cin >> sail[x];
cout << endl;}

for (int i = 0; i < 12; i ++){ sum = sum + sail[i];}
cout << sum << endl;
return 0;
}
