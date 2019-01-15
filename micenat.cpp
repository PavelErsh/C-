#include<iostream>
#include <vector>
#include<fstream>
using namespace std;
int SIZE = 60;
int main (){
  char file[SIZE];
  ifstream inFile;
  cout << "Enter file name\n";
  cin.get(file, SIZE);
  inFile.open(file);
  if (inFile.good()){

    int colvo;
    inFile >> colvo;
    vector<string> name (colvo);
    vector<double> donat(colvo);
    for (int x = 0; x < colvo; x ++){
      inFile >> name[x];

      inFile >> donat[x];
    }
    if (inFile.eof ())
// достигнут конец файла
cout << "End of file reached.\n";
else if (inFile.fail ())
// ввод прекращен из-за несоответствия типа данных
cout << "Input terminated by data mismatch.\n";
else
// ввод прекращен по неизвестной причине
cout << "Input terminated for unknown reason.\n";

    for (int j = 0; j < colvo; j++){
      if (donat[j] > 10000){
        cout << "Имя того, кто внёс более 10 000$" << " " << name[j] << " " << donat[j] << endl;
  continue;
      }
    }
  return 0;
  }

}
