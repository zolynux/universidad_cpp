#include <iostream>
using namespace std;

// Definicion funcion recursiva (firma del metodo)
void funcionRecursiva(int);

int main()
{
  // Funciones recursivas
  // Imprimir del 1 al 5 de manera recursiva
  int valor = 5;
  funcionRecursiva(valor);
}

// Implementacion de la funcion recursiva
void funcionRecursiva(int numero)
{
  // Caso Base (numero == 1)
  if (numero == 1)
  {
    cout << numero << " ";
  }
  // Caso recursiva
  else
  {
    funcionRecursiva(numero - 1);
    cout << numero << " ";
  }
}