#include <iostream>
using namespace std;

int main()
{
  // Arreglos
  // 1. Sintaxis definir arreglos con apuntadores
  int largoArreglo = 5;
  // int numeros[largoArreglo];
  // Apuntadores
  int *numeros = new int[largoArreglo];

  // Inicializamos los valores
  numeros[0] = 100;
  numeros[1] = 200;
  numeros[2] = 300;
  numeros[3] = 400;
  numeros[4] = 500;

  // Accedemos a los elementos con iterador

  for (int i = 0; i < largoArreglo; i++)
  {
    cout << "elemento " << i + 1 << " - arreglo[" << i << "] = " << numeros[i] << endl;
  }

  // Eliminar el arreglo de la memoria
  delete[] numeros;

  cout << "Eliminar un arreglo de la memoria: " << numeros << endl;

  return 0;
}