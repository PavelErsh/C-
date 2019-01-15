#include <iostream>
using namespace std;
int step(int);
int result =0 ;
int stepen = 3;
int a = 1;
int main (){
  cout << "Enter namber\n";
  int namber;
  cin >> namber;
  cout << step(namber);
  return 0;
}
int step (int namber){
  if (a < stepen);
  a++;
  result = 1 + step (namber * namber);
  return result;
}
