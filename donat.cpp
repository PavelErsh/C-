#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main (){
  cout << "Введите количество миценатов\n";
  int colvo;
  cin >> colvo;
  vector<string> name (colvo);
  vector<double> donat(colvo);
  for (int x = 0; x < colvo; x ++){
    cout << "Имя мицената: ";
    cin>> name[x];
    cout << endl;
    cout << "Сумма пожертвования: ";
    cin >> donat[x];
    cout << endl;
  }
  for (int j = 0; j < colvo; j++){
    if (donat[j] > 10000){
      cout << "Имя того, кто внёс более 10 000$" << " " << name[j] << " " << donat[j] << endl;
continue;
    }
  }
return 0;
}
