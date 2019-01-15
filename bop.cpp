#include <iostream>
using namespace std;
const int size = 20;
struct bop {
  char fullname[size];
  char title [size];
  char bopname [size];
  int preference;
};

 bop marcho{
   "Wimp Macho",
   "Develeper",
   "Spider",
   1
 };
 bop rhodes{
   "Raki Rhose",
   "Disain",
   "Casper",
   0
 };
int main (){
  cout << "a. display by name" << "\t" << "b. display by title\n";
  cout << "c. display" << "\t" << "display by preference\n";
  cout << "q. quit\n";
  char otvet;
  while (otvet != 'q'){
    cin.get(otvet);
    switch(otvet){
      case 'a': cout << marcho.fullname << endl << rhodes.fullname << endl; break;
      case 'b': cout << marcho.title << endl << rhodes.title << endl; break;
      case 'c': cout << marcho.bopname << endl << rhodes.bopname << endl; break;
    }
  if (otvet == 'q')
  cout << "Bue" << endl;
  }
  return 0;
}
