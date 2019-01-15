#include <iostream>
using namespace std;
int main (){
char arr[5] {'\0', '\0', '\0', '\0', '\0',};
cout << "Enter simvol"<< endl;
cin.get(arr, 20);
int a = 0;
while (arr[a] != '@'){
 a++;}
if (arr[a] == '@'){
for (int n = 0; n < a; n++) 
cout << arr[n]; 
cout << "\n";}
return 0; 
}
