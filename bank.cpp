#include <iostream>
using namespace std;
int main(){
double P_Dafna = 100.0;
double P_Kleo =  100.0;
for (int yar = 1; P_Kleo >= P_Dafna; yar ++){
P_Dafna = (100 * 0.1) + P_Dafna;
P_Kleo = 0.5 * P_Kleo;
cout << yar  << P_Dafna  << "\t"<< P_Kleo << endl;
}
return 0;
}
