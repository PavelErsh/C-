#include <iostream>
using namespace std;
int main (){
char  slovo [10];
cout << "Enter slova\n";

cin.get(slovo, 10);
for (int x = 0; x < 9; x ++)
{ if (slovo [x] == ' '){int colvo = 0; colvo ++; cout << colvo << endl; continue; }
  if (slovo [x] == '#'){break;}
};
return 0; }
