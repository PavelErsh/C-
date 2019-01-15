#include <iostream>
#include <string>
// Константы
const int ArSize = 10;
// Прототип функции
int main()
{
using namespace std;
string input;
char next;
cout << "Enter a line: \n";
cin >> input ;
cout << input.size() << endl;

cout << "Enter next line (empty line to quit) :\n";
cin >> input;
cout << "Bye\n";
return 0;
}
