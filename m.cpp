#include <iostream>
using namespace std;

struct WW {
float dim;
char name [20];
float ves;
};

int main (){
WW * pica = new WW;
cout << "diametr\n";
cin >> pica -> dim;
cin.ignore();
cout << "name\n";
cin.get(pica -> name, 20);
cout << "ves\n";
cin >> pica -> ves;

cout << "output" << endl;
cout << pica -> dim << endl;
cout << pica -> name << endl;
cout << pica -> ves << endl;
return 0;
}
