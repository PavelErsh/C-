#include <iostream>
long double probability(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
int main()
{
using namespace std;
double one, two, fri, fo, five, mega;
// Ввод общего количества номеров и количества номеров, которые нужно угадать
cout << "Enter the total number of choices on the game card and\n"
"the number of picks allowed:\n";
while (cin >> one >> two >> fri >> fo >> five >> mega)
{
cout << "You have one chance in ";
cout << probability(one, two, fri, fo, five, mega); // вычисление и вывод шансов
cout << " of winning. \n";
cout << "Next fix numbers (q to quit) : ";
// Ввод следующих двух чисел (q для завершения)
}
cout << "bye\n";
return 0;
}
// Следующая функция вычисляет вероятность правильного
// угадывания picks чисел из numbers возможных
long double probability(unsigned one, unsigned two, unsigned fri, unsigned fo, unsigned five, unsigned mega)
/*{
long double result = 1.0; // несколько локальных переменных
long double n;
unsigned p;
for (n = numbers, p = picks; p > 0; n--, p--)
result = result * n / p ;
return result;
}*/
{
  long double cisl = one * two * fri * fo * five * mega;
  long double znamen = 1.0 * 2.0 * 3.0 * 4.0 * 5.0 * 6.0;
  return znamen / cisl;
}
