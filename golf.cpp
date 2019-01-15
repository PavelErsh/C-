#include <iostream>
using namespace std;
int SIZE = 10;
int sred (int[], int);
int main (void){
  int result [SIZE];
  cout << "Для того что-бы завершить ввод, введите Q\n";
  int x = 0;
  for (x = 0; x < SIZE ; x ++){
      cout << "Введите результат ";
      cin >> result[x];
      if (result[x] == 'Q'){
        cout << sred(result, x) << endl;
        break;
      }
    }

  cout << "Среднее значение " << sred(result, x) << endl;
  return 0;
}
int sred (int result[], int x) {
  double sum = 0;
  for (int a = 0; a < x; a++){
    sum = sum + result[a];
  }
  return sum/x;
}
