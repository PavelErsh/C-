
#include <iostream>
using namespace std;
int main(){
char first[20]{};
char last[30]{};
cout<<"first name\n";
cin.getline(first,20);
cout <<"last name\n";
cin.getline(last,30);
cout << "age\n";
int age;
cin >> age;
cout << "Name"<<last << " " << first << endl;
int grade{first[0]};
grade ++;
char plas(grade);
cout << "Grade " << plas << endl;
cout << "Age " << age << endl;
return 0;
}
