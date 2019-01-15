#include <iostream>
using namespace std;
double full_arr(double*, int);
double show_arr(double* , int);
double reve_arr(double* , int);
const int SIZE = 5;
int main (){
  double ARR [SIZE] {0.0};
full_arr(ARR, SIZE);
  return 0;
}
double full_arr(double* ARR[], int SIZE){
  double factor;
  while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
 show_arr(ARR, SIZE);
 return 0;
}
double show_arr(double* ARR[], int SIZE){
  cout << "Output\n";
  for (int x = 0; x < SIZE; x ++){
    cout << ARR[x] << endl;
  }
  reve_arr(ARR, SIZE);
  return 0.0;
}
double reve_arr(double* ARR[], int SIZE){
  cout << "Revrse\n" << endl;
  for (int g = 4; g >= 0; g--){
    cout << ARR[g] << endl;
  }
}
