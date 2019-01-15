#include <iostream>
using namespace std;
int fac(int);
int main (){
cout << "Enter factorial\n";
int namber;
cin >> namber;
if (namber < 0){
  cout << "Error\n";
}
if (namber == 1 || namber == 0){
  cout << "1\n";
}
else if (namber > 1){
cout << fac(namber);}
return 0;
}
int fac (int namber){
  int i = 1;
  int result = 1;
  cout << "Step\t" << i << endl;
  i++; // операция инкремента шага рекурсивных вызовов
  cout << "Result= " << result << endl;
  result = namber * fac(namber - 1); // функция вызывает саму себя, причём её аргумент уже на 1 меньше
  return result;
}
