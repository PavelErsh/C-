#include<iostream>
using namespace std;
int main (){
cout << "Enter namber:";
int namber;
int sum = 0;
while (cin >> namber){
cout << "Enter namber:";
if (namber == 0){break;}
if (namber != 0)
{sum +=namber;
cout << sum << endl;}
}
return 0;
}

