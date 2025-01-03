#include <iostream>
using namespace std;

int main()
{
  // Arreglos
  // 1. Declarar
  int numerosArreglo[5];
  // 2. Modificar los elementos de un arreglo
  numerosArreglo[0] = 13;
  numerosArreglo[1] = 21;
  numerosArreglo[4] = 82;

  // 3. Imprimir los valores de arreglo

  cout << "Elemento 1 - arrelo[0]: " << numerosArreglo[0] << endl;
  cout << "Elemento 2 - arrelo[1]: " << numerosArreglo[1] << endl;
  cout << "Elemento 3 - arrelo[2]: " << numerosArreglo[2] << endl;
  cout << "Elemento 4 - arrelo[3]: " << numerosArreglo[3] << endl;
  cout << "Elemento 5 - arrelo[4]: " << numerosArreglo[4] << endl;

  return 0;
}