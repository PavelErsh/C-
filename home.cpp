#include <iostream>
using namespace std;
int main(){
  int zaglav = 0;
  int strok = 0;
  int namber = 0;
  char word;
  cin.get(word);
  for (int x = 0; ; x++){
    if (word == 'q') {break;}
    if (word >= 'A' && word <= 'Z'){++zaglav;}
    if (word >= 'a' && word <= 'z') {++strok;}
    if (word != 'A' && word != 'Z' && word != 'a' && word != 'z') {++namber;}
cin.get(word);
  }
  cout << "Zaglav " << zaglav << " strok " << strok << " namber " << namber << endl;
  return 0;
}
