#include <iostream>
using namespace std;
struct box {
  int shir;
  int vis;
  int glub;
  double v;
};
int out (box*, box*);
int step (box*, box*);
int main (){
  box one {12, 12, 12, 34};
  box two {14, 14, 14, 56};
  out ( &one,  &two);
  cout << endl;
  step( &one, &two);
  cout << endl;
  return 0;
}
int out (box* one, box* two){
  cout << "One\n";
  cout << one->shir << endl;
  cout << one->vis << endl;
  cout << one->glub << endl;
  cout << one->v << endl;
  cout << endl;
  cout << "Two\n";
  cout << two->shir << endl;
  cout << two->vis << endl;
  cout << two->glub << endl;
  cout << two->v << endl;
}
int step (box* one, box* two){
  cout << "One\n";
  cout << one->shir  * one->shir << endl;
  cout << one->vis * one->vis << endl;
  cout << one->glub  * one->glub<< endl;
  cout << one->v  * one->v<< endl;
  cout << endl;
  cout << "Two\n";
  cout << two->shir * two->shir << endl;
  cout << two->vis  * two->vis << endl;
  cout << two->glub * two->glub << endl;
  cout << two->v *two->v << endl;
  return 0;
}
