#include <iostream>
using namespace std;
int main (){
char slovo [20];
cin.get(slovo, 20);
for (int x = 20; x >= 0; x --) {
  cout << slovo[x] << endl;
}
return 0;
}
