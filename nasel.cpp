#include<iostream>
using namespace std;
int  main(){
cout << "Enter the poplation uou contri\n";
long long contri;
cin >> contri;
const long long world_population = 6898758899;
long double result = contri % world_population;
cout << result << endl;
return 0; 
}
