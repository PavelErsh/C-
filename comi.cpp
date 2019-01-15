#include <iostream>
using namespace std;
int main (){
  cout << "First nambler\n";
  int first;
  cin >> first;
  cout << "last nambler\n";
  int last;
  cin >> last;
  unsigned long long sum = 0;
  for (int x = first; x < last; x ++, first++){
    sum = first+ sum;
  }
  unsigned long long result = sum + last;
  cout << result << endl;
  return 0;
}
