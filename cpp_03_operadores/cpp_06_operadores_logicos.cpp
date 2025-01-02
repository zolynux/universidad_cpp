#include <iostream>
using namespace std;

int main()
{
  // Operadores Logicos

  bool a = true, b = false, c;
  cout << "Valor a: " << a << endl;
  cout << "Valor b: " << b << endl;
  // Operador and (&&)
  // Regresa verdadero si ambos operandos son verdaderos
  c = a && b;
  cout << "Resultado operador and: " << c << endl;

  // Operador or (||)
  // Regresa verdadero si cualquiera de los operandos es verdadero
  c = a || b;
  cout << "Resultado operador or: " << c << endl;

  // Operador not (!)
  // Invierte el valor original (true -> false, false -> true)
  c = !a;
  cout << "Resultado operador not: " << c << endl;

  return 0;
}