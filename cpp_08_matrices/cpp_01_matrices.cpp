#include <iostream>
using namespace std;

int main()
{
  // Definir una matriz de 2x3
  const int RENGLONES = 2, COLUMNA = 3;
  int matriz[RENGLONES][COLUMNA];
  // Modificar la matriz
  matriz[0][0] = 100;
  matriz[0][1] = 200;
  matriz[0][2] = 300;
  matriz[1][0] = 400;
  matriz[1][1] = 500;
  matriz[1][2] = 600;
  // Leer los valores
  cout << "Elemento 1 [0][0] = " << matriz[0][0] << endl;
  cout << "Elemento 2 [1][2] = " << matriz[1][2] << endl;
}