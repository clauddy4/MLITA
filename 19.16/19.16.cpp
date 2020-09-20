/*
19.16. Простые числа (3)
Найти сумму простых чисел, расположенных между N и K (0 &lt; N ≤ K ≤ 4×10 6 ), включая эти
числа.
Ввод. В первой строке файла INPUT.TXT содержатся через пробел натуральные числа N и K.
Вывод. Вывести в файл OUTPUT.TXT одно число - сумму простых чисел, расположенных
между N и K.

Пример
Ввод
1 5
Вывод
10
*/
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

bool isSimple(int n)
{
    for (int i = 2; i<=sqrt(n); i++) 
    if (n % i == 0)
        return false;
    return true;
}

int main()
{
  std::ifstream in ("INPUT.txt");
  std::ofstream out;
  out.open ("OUTPUT.txt");
  int N, K;
  long res = 0;

  if (in.is_open () && out.is_open ())
    {
      in >> N >> K;
      
      for (int i = N; i <= K; i++) {
          if (i != 1 && isSimple(i)) {
             res+=i;
          }
      }
      
      out << res;
  }
}