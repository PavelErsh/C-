
#include<iostream>
using namespace std;
int main(){
cout << "Введите количество секунд\n";
long long second;
cin >> second;

const int time_dais = 86400;
int dais = second/time_dais;

long long dais_ost = second % time_dais;

const int time_hours = 3600;
int hours = dais_ost/time_hours;

long long hours_ost = dais_ost % time_hours;

const int time_minets = 60;
int minets = hours_ost/time_minets;

double minets_ost = hours_ost % time_minets;



cout << second << " Дни " << dais << " Часы " << hours << " Минуты " << minets << " Секунды " << minets_ost << endl;
}
