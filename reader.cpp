#include <iostream>
#include<fstream>
using namespace std;
const int SIZE = 60;
int main (){
  char file[SIZE];
  ifstream inFile;
  cout << "Enter file name\n";
  cin.get(file, SIZE);
  inFile.open(file);
  if (!inFile.is_open()){cout << "Eror read\n";}
  char word;
  int zaglav = 0;
  int strok = 0;
  int namber = 0;
  inFile >> word;
  if (inFile.good())
  {
    for (int x = 0; x < 40 ; x++){
    if (word == 'q') {break;}
    if (word >= 'A' && word <= 'Z'){++zaglav;}
    if (word >= 'a' && word <= 'z') {++strok;}
    if (word != 'A' && word != 'Z' && word != 'a' && word != 'z') {++namber;}
    inFile >> word;
  }
  if (inFile.eof()){
    cout << "Zaglav " << zaglav << " strok " << strok << " namber " << namber << endl;
  }
  return 0;
  }
}
