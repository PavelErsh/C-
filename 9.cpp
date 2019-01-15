#include <iostream>
using namespace std;

struct WW {
char name [20];
float dim;
double ves;
};
int main (){

WW *pica_1 = new WW;
WW *pica_2 = new WW;
WW *pica_3 = new WW;

cout << "Enter name\n";
cin.get(pica_1-> name, 20);
cout << "Enter dim\n";
cin >> pica_1->dim;
cout << "Enter ves\n";
cin >> pica_1-> ves;

cout << "output" << endl;
cout << pica_1 -> name << endl;
cout << pica_1 -> dim << endl;
cout << pica_1 -> ves << endl;

return 0;

}
