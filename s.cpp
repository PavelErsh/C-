#include<iostream>
#include <cctype>
using namespace std;
int main (){
cout << "Enter doukv\n";
char word;
int kolvo = 0; 
int kn = 0;
while (word != '@'){
if (isalnum(word))
kolvo++;
if (isdigit(word))
kn++;
cin.get(word);
}
cout <<"boukv " << kolvo << "nambers "<< kn << endl; 
}
