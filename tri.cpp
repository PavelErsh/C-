#include<iostream>
using namespace std;
struct box {
  char maker[40];
  float height;
  float width;
  float length;
};
void vivod (box);
void ukaz (box*);
int main () {
  cout << vivod(box);
  cout << ukaz(box*);
  return 0;
}
void vivod(box){
  box one {
    "one",
    5.5,
    5.5,
    5.5
  }
  return one.maker << one.height << one.width << one.length;
}
void ukaz (box*){
  box two {
    "two",
    7.8,
    7.8,
    7.8
  }
  return two.maker << two.height << two.windth << two.length;
}
