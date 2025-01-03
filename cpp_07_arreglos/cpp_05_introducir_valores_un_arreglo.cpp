#include <iostream>
using namespace std;

int main()
{
  // Introducir valores a un arreglo

  // Declara arreglo
  cout << "Proporciona el largo de arreglo: ";
  int largoArreglo;
  cin >> largoArreglo;

  // Sintaxis apuntadores-arreglo
  int *numeros = new int[largoArreglo];

  // Solicitar los elementos al usuario
  for (int i = 0; i < largoArreglo; i++)
  {
    cout << "Proporciona el valor [" << i << "]" << ": ";
    cin >> numeros[i];
  }

  // Imprimimos los valores del arreglo
  cout << endl
       << "Mostramos los valores almacenados: " << endl;
  for (int i = 0; i < largoArreglo; i++)
  {
    cout << "Elemento[" << i << "]" << " = " << numeros[i] << endl;
  }

  // Eliminar el arreglo de la memoria
  delete[] numeros;

  return 0;
}