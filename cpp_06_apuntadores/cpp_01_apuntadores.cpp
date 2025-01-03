#include <iostream>
using namespace std;

int main()
{
  // Apuntadores (referencia de memoria)
  int a = 10;
  // Definimos un apuntador
  int *b = &a;
  // Imprimir la direccion de memoria
  cout << "Direccion memoria '&a': " << &a << endl;
  cout << "Direccion memoria a la que apunta 'b': " << b << endl;
  cout << "Desreferencia '*b': " << *b << endl;
  cout << "Valor 'a': " << a << endl;
  cout << "Direccion memoria del apuntador '&b': " << &b << endl;

  return 0;
}