#include <iostream>
using namespace std;

const int size = 20;

struct CandyBar {
char NAME[size];
double veight;
int calories;
};
int main (){
CandyBar snack  {
"Macha Much",
2.3,
350
};

cout << snack.NAME <<  " " << snack.veight << " " << snack.calories  << " "<< endl;
return 0;
}
