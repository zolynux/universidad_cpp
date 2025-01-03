#include <iostream>
using namespace std;

int main()
{
  // Apuntadores (referencia de memoria)
  int a = 10;
  // Definimos un apuntador
  int *b = &a;

  // Modificar el valor de 'a', pero con el uso del apuntador
  // Desreferencia para acceder al valor de la memoria a la que apuntamos
  *b = 20;
  cout << "Nuevo valor desde 'a': " << a << endl;
  cout << "Nuevo valor apuntador desde '*b': " << *b << endl;

  return 0;
}