#include <iostream>
using namespace std;
const int SIZE = 20;
struct pizza {
char NAME [SIZE];
double diam;
double veigh;
};
int main (){
pizza produkt{};
cout << "Enter name conmpani: ";
cin.getline (produkt.NAME, SIZE);
cout << "Enter diamet pizza: ";
cin >> produkt.diam;
cout << "Enter vigh pizza: ";
cin >> produkt.veigh;
cout << "Compani " << produkt.NAME << " Diamm " << produkt.diam << " Vigh " << produkt.veigh << endl;
return 0;
}
