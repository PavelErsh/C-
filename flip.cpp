#include <iostream>
using namespace std;
int main (){
cout << "Enter your first name: ";
string name;
cin >> name;
cout << "Enter your last name: ";
string last;
cin >> last;
string * fn = & name;
string * ln = & last;
cout << *ln << ", " << *fn << endl;
cout << "memorin adress " << name << " " << &name << endl; 
cout << "memori adress " << last << " " << &last << endl;
return 0;
}
