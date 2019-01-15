#include<iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
const int SIZE = 40;
int main (){
  int colvo;
  ifstream file;
  file.open("you.txt");

file >> colvo;
  char name[colvo] [SIZE];
  double donat[colvo];
  for (int x = 0; x < colvo; x ++){

  file.getline;{(name, [x],[SIZE])}
    file >> donat[x];
  }
  for (int j = 0; j < colvo; j++){
    if (donat[j] > 10000){
      cout << "Имя того, кто внёс более 10 000$" << " " << name[j] [40] << " " << donat[j] << endl;
  continue;
    }
    for (int a = 0; a < colvo; a ++)
{ cout << name [a] [40] << endl;}
  }
  file.close();
  return 0;
}
