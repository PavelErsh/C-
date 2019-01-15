#include<iostream>
using namespace std;
int main () {

int namber;
  cout << "Enter first namber" << endl;
  int first;
  cin >> first;
  cout << "Enter last namber" << endl;
  int last;
  cin >> last;
  for (int x = first; x < last; x ++){
    first ++;
    namber = first + x; }
  int sum = namber + last;
cout << sum << endl;
return 0;
}
