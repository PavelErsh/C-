#include<iostream>
using namespace std;
struct nambers{
  int name;
};
int sum (nambers*, nambers*);
int  main  (void)
{
  nambers one {1};
  nambers two {2};
cout <<  sum (&one, &two);
cout << endl;

}
int sum (nambers* one, nambers* two){
  return one->name + two->name;
}
