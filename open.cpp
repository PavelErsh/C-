#include <iostream>
#include <fstream>
using namespace std;
int main (void){
int colvo = 0;
ifstream cten("main.txt");
char probel = '\0';
while (getline(cten, probel)){
++colvo;}
cout << colvo << endl;
return 0;}

