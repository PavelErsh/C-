#include<iostream>
using namespace std;
int main(){
const int yard = 220;
const int metr =201168;
cout << "Enter falgon\n";
int falgon;
cin >> falgon;
int res_yard = falgon * yard;
int res_metr = falgon * metr;
cout << "You enter " << falgon 
<< " yard " << res_yard 
<< " metr " << res_metr << endl;
return 0; }
