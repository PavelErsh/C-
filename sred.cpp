#include<iostream>
#include <cctype>
using namespace std;
const int Max = 10;
int main (){
  double donats [Max];
  cout << "Enter donats\n";
  //data;
  int namber = 1;
  for (int x = 0; x < Max; x++){
    cout << "donation namber #" << namber ++ << endl;
    while (!(cin >> donats[x]) ) {
      cin.clear();
      while (cin.get() != '\n')
      continue;
      cout << "Enter double nambers; ";
    }
  }
  //sum;
double sum = 0;
  for (int j = 0; j < Max; j ++){
  sum = donats[j] + sum;//sum += donation[j];
  }

  double sred = sum / Max; //10 == Max;
//max sred;
int max_sred = 0;
for (int g = 0; g < Max; g ++){
  if (sred < donats[g])
  max_sred++;
}
cout << "sum nambers " << sum << " sred " << sred << " max sred " << max_sred << " " << endl;
return 0;
}
