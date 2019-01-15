#include <iostream>
using namespace std;
int out (int [], int);
int sred(int[], int);
int main (){
  const int S = 5;
  int golf [S];
  for (int x = 0; x < S; x++){
    cout << "Play №" << (x+1) << " ";
    cin >> golf[x];
    cout << endl;
  }
  cout << "Output\n";
  out(golf, S);
  cout << endl;
  cout << "Midl\n";
  cout << sred(golf, S);
  cout << endl;
  return 0;
}
int  out (int golf[], int S ){
  for (int a = 0; a < S; a++){
  cout << golf[a] << endl;
  }
}
int sred (int golf[], int S){
  int sum = 0;
  for (int j = 0; j < S; j++){
    sum = sum + golf[j];
  }
  return sum / S;
}
