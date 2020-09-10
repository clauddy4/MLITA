//МАкарова Ольга, ПС-21
// 20.11. Наибольшее число (4)
// В положительном целом N-значном числе вычеркнуть одну цифру так, чтобы оставшееся число
// было как можно большим.
// Ввод из файла INPUT.TXT. В первой строке находится количество знаков числа N (2  N  10 5 ).
// Во второй строке задано само N-значное число.
// Вывод в файл OUTPUT.TXT. Вывести единственное число: номер позиции, соответствующий
// вычеркнутой цифре. Если решений несколько, вывести наименьший номер.
// Пример
// Ввод 1  Ввод 2
// 3       3
// 113     321
// Вывод 1 Вывод 2
// 1       3

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int
main ()
{
  std::ifstream in ("INPUT.txt");
  std::ofstream out;
  out.open ("OUTPUT.txt");
  string line;
  bool numberFound = true;
  int index = 0;
  if (in.is_open () && out.is_open ())
    {
      try
      {
        getline (in, line);
	    getline (in, line);
      } catch (exception e) {}

      for (int i = 0; i < line.size(); i++)
	  {
	    if (line[i] <= line[i + 1])
	      {
	        index = i + 1;
	        break;
	      }
	  }

      (index == 0) ? index = line.size() : index;


      out << index;
    }
}
