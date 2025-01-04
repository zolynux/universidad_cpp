#include <iostream>
using namespace std;

int main()
{
  // Definir una matriz de 2x3
  const int RENGLONES = 2, COLUMNA = 3;
  int matriz[RENGLONES][COLUMNA] = {
      {100, 200, 300}, // -> Primer renglón
      {400, 500, 600}  // -> Segundo renglón
  };

  // Leer los valores
  cout << "Elemento 1 [0][0] = " << matriz[0][0] << endl;
  cout << "Elemento 2 [1][2] = " << matriz[1][2] << endl;
}