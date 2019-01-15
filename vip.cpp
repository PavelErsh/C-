#include<iostream>
#include<fstream>
using namespace std;
int main(){
  int s;
  int b;
   ifstream file("list.txt"); // файл из которого читаем (для линукс путь будет выглядеть по другому)

   file >> s;
   file >> b;
   int sum = s + b;
   cout << sum << endl;

   file.close();
  return 0;
}
