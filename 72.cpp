#include <iostream>
using namespace std;
const int SIZE = 5;
int out (int golf[], int SIZE);
int sred (int golf[], int SIZE);
int main (){
   int golf [SIZE];
  int x = 0;
  for (int x = 0; x < SIZE; x++){
    cout << "Значение №" << x << " ";
    cin >> golf[x];
  }
  cout << "Output \n";
  out (golf, SIZE);
  cout << endl;
  cout << "Sred\n";
 cout << sred ( golf,  SIZE);
 cout << endl;
  return 0;
}
int out (int golf[], int SIZE){
  for (int a = 0; a < SIZE; a ++){
    cout << golf[a] << endl;
  }
}
int sred (int golf[], int SIZE){
  int sum = 0;
  for (int b = 0; b < SIZE; b ++){
    sum = sum + golf[b];
  }
  return  sum / SIZE;
}
