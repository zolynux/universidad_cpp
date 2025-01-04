#include <iostream>
using namespace std;

// Procedimiento
void cambiarValor(int *param)
{
  param[0] = 400;
  param[1] = 500;
  param[2] = 600;
}

int main()
{
  // Ejemplo paso por referencia con arreglos y apuntadores
  int arg[] = {100, 200, 300};
  cout << "Antes llamar funcion: ";
  for (int i = 0; i < 3; i++)
  {
    cout << arg[i] << ", ";
  }
  cout << endl;
  cambiarValor(arg);
  cout << "Despues llamar funcion: ";
  for (int i = 0; i < 3; i++)
  {
    cout << arg[i] << ", ";
  }
  cout << endl;
}