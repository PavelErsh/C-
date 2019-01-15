#include <iostream>
using namespace std;
unsigned name (const char*, char ch);
int main (void){
  char plaur [15] = "Casper";
   name (plaur, 'C');
}
unsigned name (const char* plaur, char ch )
{
for (int a = 0; a < 15 ; a++){
  if (plaur [a] == '\0'){ cout << endl; break;}
  cout << plaur [a];
}
  }
