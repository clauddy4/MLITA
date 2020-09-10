// �������� �����, ��-21
// 19.2. ������ (3)
// ����� ���������� ��������� �������� �������������� 2?N ���������������� 2?1.
// ��������, ������� ������������� ���� � ����� �����������, ������� ����������.
// ����. � ������������ ������ �������� ����� INPUT.TXT ������ �������� N (1 ? N ? 20).
// �����. � ������������ ������ ��������� ����� OUTPUT.TXT ������ �����������
// ���������� ��������� �������� ��������������.
// ������
// ����
// 5
// �����
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
