#include <iostream>
using namespace std;
int main (){
int doxod [3] [12];
string mounths [12]{
"January",
"February",
"Match",
"April",
"May",
"June",
"July",
"August",
"September",
"October",
"November",
"December",};
int sum = 0;

//data
for (int yar = 0; yar < 3; yar ++){
   for (int m = 0; m < 12; m ++){
   if (yar == 0 || yar < 1){cout << "mounth " << mounths[m] << endl; cin  >> doxod [yar] [m];
   cout << endl; }
             if (yar > 0 || yar != 0){ cout << "yar " << yar << " " << "mounth " << mounths[m] << endl;
             cin >> doxod [yar]  [m];
             cout  << endl;}
           }
  }
 //sum
for (int x = 0; x < 3; x ++)// yar
{ for (int j = 0; j < 12; j ++){
     sum = doxod [x] [j] + sum;
}

   }
   cout << "Output"<< sum << endl;
return 0;
}
