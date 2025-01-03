#include <iostream>
using namespace std;

int main()
{
  // Ciclo while
  // Imprimir 1 al 5
  int contado = 1, maximo = 5;
  while (contado <= maximo)
  {
    cout << contado++ << endl;
  }

  return 0;
}