#include<iostream>
using namespace std;
int main(){
int first, past;
cout << "Eter tvo nambers\n";
cin >> first >> past;
int result = first > past ? first : past;
cout << "big is " << result << endl;
return 0;
}
