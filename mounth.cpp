#include <iostream>
using namespace std;
int mounth (int);
int main (){
cout << "Enter your age ";
int age;
cin >> age;
cout << endl;
cout << "Your age in months is " << mounth (age) << endl;
return 0;
}
int mounth (int age){
return age * 12;
}
