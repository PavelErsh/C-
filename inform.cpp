#include <iostream>
using namespace std;
int main (){
cout << "What is your first name? ";
string first;
cin >> first;
cout << "What is your last name? ";
string last;
cin >> last;
cout << "What letter grade do you deserve? ";
char token;
cin >> token;
cout << "What is your age? ";
int age;
cin >> age;
cout << "Name: " << last  << ", " << first << endl;
cout << "Grade: " << ++token << endl;
cout << "Age: " << age << endl;
return 0;
}
