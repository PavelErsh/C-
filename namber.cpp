#include <iostream>
using namespace std;
int main (){
  cout << "Enter namber\n";
  int namber;
  int sum = 0;
  for (int x = 0; x < 5; x ++) {
    std::cin >> namber;
    sum = namber + sum;
  }
  std::cout << sum << '\n';
  return 0;
}
