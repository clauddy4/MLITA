/* 
Макарова Ольга

19.4. Спираль (3).
Расположить N 2 чисел от 1 до N^2 в квадрате по спирали.
Ввод. В единственной строке файла INPUT.TXT задано число N (1 ≤ N ≤ 50).
Вывод. Выходной файл OUTPUT.TXT содержит N 2 чисел по N чисел по спирали.
Пример
Ввод
4
Вывод
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
*/

#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int main ()
{
  std::ifstream in ("INPUT.txt");
  std::ofstream out;
  out.open ("OUTPUT.txt");
  int N;
  vector<int> players;

  if (in.is_open () && out.is_open ())
  {
    in >> N;
    
    vector<vector<int>> matrix(N, vector<int>(N));
	int length = pow(N, 2);
	int tempN = N; 
	int counter = 1;
	int border = 0;
	
	while (counter <= length) {
	    
		for (int i = border; i < tempN; i++) {
			matrix[border][i] = counter;
		    counter++;
		}
		
		for (int i = tempN-2; i >= border; i--) {
			matrix[tempN-1][i] = counter;
			counter++;
		}
		
		for (int i = tempN-2; i > border;i--) {
			matrix[i][border] = counter;
			counter++;
		}
		
		border++, tempN = tempN-1;
		
	}

	if(!N%2) {
		matrix[(N+1)/2][(N+1)/2] = length;
	}
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			out << matrix[i][j] << " ";
		}
	    out << endl;
	}
	return 0;
  }      
}
