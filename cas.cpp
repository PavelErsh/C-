#include <iostream>
using namespace std;
int main (){
cout << "Enter the number of seconds ";
long long time;
cin >> time;

int days = time / 86400;
int days_ost = time  % 86400;

int hours = days_ost / 3600;
int hours_ost = days_ost % 3600;

int min = hours_ost / 60;
int min_ost = hours_ost % 60;

cout << time  << " second  = " << days << " days " << hours << " hours " 
<< min <<  " minutes "<<  min_ost << " second " << endl;
return 0;
}
