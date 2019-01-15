#include <iostream>
using namespace std;

struct WW{
char name [30];
double diam;
short ves;
};

int main (){
WW pica{
};
cout << "Enter compani\n";
cin.get(pica.name,30);
cout << "Enter diametr\n";
cin >> pica.diam;
cout << "Enter ves\n";
cin >> pica.ves;

cout << pica.name << endl;
cout << pica.diam << endl;
cout << pica.ves << endl;
return 0;
}
