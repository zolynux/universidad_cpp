#include <iostream>
using namespace std;

int main()
{
  // Ciclo do while
  // Imprimir 1 al 5
  int contado = 1, maximo = 5;
  do
  {
    cout << contado++ << endl;
  } while (contado <= maximo);

  return 0;
}