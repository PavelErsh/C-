#include <iostream>
using namespace std;

struct CandyBar{
char name [20];
float ves;
short colores;
};//main struct

int main (){
string v = "ves ";
string n = "name ";
string c = "colores ";

CandyBar snack{
"Moncha Much",
2.3,
350,
};//snack stukt

cout << "\t" << "snack" << endl;
cout << n << snack.name << endl;
cout << v << snack.ves << endl;
cout << c << snack.colores << endl;

CandyBar cooks{
"Super cook",
20.7,
700,
};
cout << "\t" << "cooks" << endl;
cout << n << cooks.name << endl;
cout << v << cooks.ves << endl;
cout << c << cooks.colores << endl;

CandyBar tort {
"Napolion",
400.5,
1000,
};

cout << "\n" << "tort" << endl;
cout << n << tort.name << endl;
cout << v << tort.ves << endl;
cout << c << tort.colores << endl;

return 0;
}

