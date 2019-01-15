#include <iostream>
using namespace std;
const int  array = 100;
int main (){
unsigned long long f[array];
f[1] = f[0] = 1;
for (int i = 2; i < array; i ++)
f[i] =i * f[i];

for (int i = 0; i < array; i ++)
cout << i << "!=" << f << endl;

return 0;
}
