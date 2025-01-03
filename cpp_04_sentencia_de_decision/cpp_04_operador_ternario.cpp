#include <iostream>
using namespace std;

int main()
{
  // Sentencia if else
  // Revisa si el valor proporcionado es positivo

  int numero = 10;

  // Verificar con operador ternario
  cout << "Valor ";
  (numero > 0) ? cout << "Positivo" : cout << "Cero o Negativo";
  cout << ": " << numero << endl;

  return 0;
}