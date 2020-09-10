// Макарова Ольга, ПС-21
// 19.2. Домино (3)
// Найти количество вариантов покрытия прямоугольника 2?N прямоугольниками 2?1.
// Покрытия, которые преобразуются друг в друга симметриями, считать различными.
// Ввод. В единственной строке входного файла INPUT.TXT задано значение N (1 ? N ? 20).
// Вывод. В единственной строке выходного файла OUTPUT.TXT должно содержаться
// количество вариантов покрытия прямоугольника.
// Пример
// Ввод
// 5
// Вывод
// 8

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int fibonacci(int N)
{
    if (N > 1) {
        return fibonacci(N-1) + fibonacci(N-2);
    }
    else {
        return 1;
    }
}

int main ()
{
  std::ifstream in ("INPUT.txt");
  std::ofstream out;
  out.open ("OUTPUT.txt");
  int N;

  if (in.is_open () && out.is_open ())
    {
      in >> N;
      
      out << fibonacci(N);
    }
}
