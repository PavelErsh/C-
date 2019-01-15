#include <iostream>
#include <vector>
#include <string>

int main() {
std::vector <std::string> slovo (3);
slovo [0]= "Hello";
slovo [1] ="it's";
slovo [2] = "me!";
for (int x = 0; x<=2; x++){
std::cout << slovo[x] << std::endl;
}
return 0;
}
