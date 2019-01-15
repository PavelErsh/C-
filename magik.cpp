#include <iostream>
using namespace std;
int main (){
  cout << "p)inform" << "\t" << "t)inform for you\n";
  cout << "y)magik" << "\t" << "q)qlit\n";
  char user;
  cin >> user;
  switch (user) {
    case 'p': cout << "you are pidor\n" ; break ;
    case 't': cout << "i know you are pidor\n" ; break ;
    case 'y': cout << "koleshuk gay\n" ; break ;
    case 'q': break;
    default: cout << "No No\n";
  }
  return 0;
}
