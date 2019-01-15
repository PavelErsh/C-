#include<iostream>
using namespace std;
int main () {
cout << "Enter words\n";
char words [40];
int colvo = 0;
cin.get(words, 40);
for (int x = 0; x < 40; x ++){
if (words == "done"){break;}
 while (words [x] == '\0'){ colvo ++;}
} cout << colvo << endl;
}
