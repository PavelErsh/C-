#include <iostream>
#include<string>
using namespace std;
double procent(double &a);
struct list{
string name;
int age;
double price;
};

 
list pavel{
"Pavel",
17,
100.34,
};
int main(){
cout << "Name " << pavel.name << endl;
cout <<  "Age " << pavel.age << endl;
cout << "Price +20%" << (pavel.price %100) * 20 << endl;
return 0;
}

