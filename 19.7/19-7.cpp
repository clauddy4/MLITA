// Макарова Ольга, ПС-21

// 19.7. Последняя цифра (2)
// Найти последнюю цифру числа a n , где a и n – натуральные числа (1 ≤ a, n ≤ 10 4 ).
// Ввод. В единственной строке файла INPUT.TXT заданы числа a и n.
// Вывод. В файл OUTPUT.TXT вывести единственное требуемое число.
// Пример

// Ввод
// 7 2
// Вывод
// 9

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
  std::ifstream in ("INPUT.txt");
  std::ofstream out;
  out.open ("OUTPUT.txt");
  int a;
  int n;
  int res;
  if (in.is_open () && out.is_open ())
    {
      in >> a >> n;
      
      vector<vector<int>> array = {
        { 0 },
        { 1 },
        { 2, 4, 8, 6 },
        { 3, 9, 7, 1 },
        { 4, 6 },
        { 5 },
        { 6 },
        { 7, 9, 3, 1 },
        { 8, 4, 2, 6 },
        { 9, 1}
      };
      
      
      int aLast = a % 10;
      int nLast = n % (array[aLast].size());
     
    
      if (nLast == 0) {
          nLast = array[aLast].size();
      }
      
      out << array[aLast][nLast - 1];
    }
}
