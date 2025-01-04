#include <iostream>
using namespace std;

int main()
{
  // Introducir datos a una matriz
  int renglones, columnas;
  cout << "Proporciona un numero de los renglones: ";
  cin >> renglones;
  cout << "Proporciona un numero de las columnas: ";
  cin >> columnas;

  // Definimos matriz
  int **matriz = new int *[renglones];

  for (int ren = 0; ren < renglones; ren++)
  {
    matriz[ren] = new int[columnas];
  }

  // Solicitar al usuario los valores de la matriz
  for (int ren = 0; ren < renglones; ren++)
  {
    for (int col = 0; col < columnas; col++)
    {
      cout << "Dato[" << ren << "][" << col << "] = ";
      cin >> matriz[ren][col];
    }
  }

  // Iteramos los elementos para imprimirlos
  cout << endl;
  cout << "---- Iteramos la Matriz----" << endl;
  for (int ren = 0; ren < renglones; ren++)
  {
    for (int col = 0; col < columnas; col++)
    {
      cout << "Matriz[" << ren << "][" << col << "] = " << matriz[ren][col] << endl;
    }
    cout << endl;
  }

  // Eliminamos de la memoria de la matriz
  for (int renglon = 0; renglon < renglones; renglon++)
  {
    delete[] matriz[renglon];
  }
  // Eliminamos la matriz por completo
  delete[] matriz;
}