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

  // Iterar los elementos de una matriz
  cout << " ----Iterar la Matriz ----" << endl;
  // Ciclo for externo (renglones)
  for (int ren = 0; ren < 2; ren++) // Controla los renglones
  {
    for (int col = 0; col < 3; col++) // Controla las columnas
    {
      cout << matriz[ren][col] << " ";
    } // fin 'for' columnas
    // Imprimimos un salto para que cada renglo este en su propia línea
    cout << endl;
  } // fin 'for' renglones
}