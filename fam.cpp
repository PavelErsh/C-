#include<iostream>
using namespace std;
int main (){
cout << "Enter first namber: ";
int first;
cin >> first;
cout << "Enter last namber: ";
int last;
cin >> last;
int result = 0;
for (int a = 0; a < last; a++ )
{result +=first++;
}
cout << result << endl;
return 0;
}

