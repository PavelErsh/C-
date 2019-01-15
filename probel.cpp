#include<iostream>
using namespace std;

int main(void){
char ARR[20];
int colvo = 0;
cin.get(ARR, 20);
for (int a = 0; a < 20; a++) 
{
if (ARR[a] == ' ') {
++colvo;}
}
cout << colvo << endl;
return 0; }
