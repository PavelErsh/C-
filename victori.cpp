#include <iostream>
using namespace std;
int main() {
  cout << "Enter namber\n";
  int namber;
  cin >> namber;
  std::cout << "Enter stepen" << '\n';
int stepen;
cin >> stepen;
int result = 1;
for (int x = 0; x < stepen; x ++){
  result = namber * result;
}
cout << result << endl;
  return 0;
}
