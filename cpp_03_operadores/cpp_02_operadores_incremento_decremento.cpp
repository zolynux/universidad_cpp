#include <iostream>
using namespace std;

int main()
{
  // Operadores Incremento
  int a = 0, b, c;
  // Operador Pre-Incremento
  ++a; // Se incrementa antes de ser utilizada nuevamente.
  cout << "Nuevo valor a (++a): " << a << endl;
  // Operador Post-Incremento
  a++; // Se incrementa hasta la siguiente vez que se utilice
  cout << "Nuevo valor a (a++): " << a << endl;

  // Operadores Decremento
  // Operador Pre-Decremento
  --a; // Se decrementa antes de ser utilizada nuevamente.
  cout << "Nuevo valor a (--a): " << a << endl;
  // Operador Post-Decremento
  a--; // Se decrementa hasta la siguiente vez que se utilice
  cout << "Nuevo valor a (a--): " << a << endl;

  return 0;
}