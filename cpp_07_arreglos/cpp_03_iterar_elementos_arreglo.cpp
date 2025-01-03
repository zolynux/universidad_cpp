#include <iostream>
using namespace std;

int main()
{
  // Arreglos
  // 1. Sintaxis simplificada arreglos
  int numeros[] = {100, 200, 300, 400, 500};

  int elementosArreglo = sizeof(numeros);
  int unElementoArreglo = sizeof(numeros[0]);
  int largoArreglo = elementosArreglo / unElementoArreglo;

  cout << "Cantidad de bytes del arreglo: " << elementosArreglo << endl;
  cout << "Cantidad de bytes de un elemento: " << unElementoArreglo << endl;
  cout << "Cantidad de elementos arreglo: " << largoArreglo << endl;

  cout << "Iteramos el arreglo:" << endl;
  for (int i = 0; i < largoArreglo; i++)
  {
    cout << "Elemento " << i + 1 << " - arrelo[" << i << "]: " << numeros[i] << endl;
  }

  return 0;
}