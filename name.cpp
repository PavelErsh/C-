#include<iostream>
using namespace std;
int main(){
cout << "enter nickname\n";
const int A = 20;
char nickname[A];
char name [A];
cin.get(nickname,A);
cin.get(name,A);
cout << nickname << "\t"<<name << endl;
return 0;
}
