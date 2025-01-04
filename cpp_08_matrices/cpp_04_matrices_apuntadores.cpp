#include <iostream>
using namespace std;

int main()
{
  // Matrices y Apuntadores
  const int RENGLONES = 2, COLUMNAS = 3;
  // Definimos matriz
  // int matriz[RENGLONES][COLUMNAS];
  int **matriz = new int *[RENGLONES];

  for (int renglon = 0; renglon < RENGLONES; renglon++)
  {
    matriz[renglon] = new int[COLUMNAS];
  }

  // Eliminamos de la memoria de la matriz
  for (int renglon = 0; renglon < RENGLONES; renglon++)
  {
    delete[] matriz[renglon];
  }
  // Eliminamos la matriz por completo
  delete[] matriz;
}