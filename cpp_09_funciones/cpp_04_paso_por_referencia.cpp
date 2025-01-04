#include <iostream>
using namespace std;

void cambiarValor(int *parametro)
{
  *parametro = 20;
}

int main()
{
  // Paso por referencia
  int argumento = 10;
  cout << "Antes llamar funcion: " << argumento << endl;
  cambiarValor(&argumento);
  cout << "Despues llamar funcion: " << argumento << endl;
}