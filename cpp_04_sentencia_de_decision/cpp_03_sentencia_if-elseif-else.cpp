#include <iostream>
using namespace std;

int main()
{
  // Sentencia if else
  // Revisa si el valor proporcionado es positivo

  int numero = 10;

  // Verificar si es positivo
  if (numero > 0)
  {
    cout << "Valor positivo: " << numero << endl;
  }
  else if (numero < 0)
  {
    cout << "Valor Negativo: " << numero << endl;
  }
  else
  {
    cout << "Valor Cero: " << numero << endl;
  }

  return 0;
}