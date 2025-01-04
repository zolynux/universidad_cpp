#include <iostream>
using namespace std;
// En este caso solo se recibe una copia del valor de la cadena
/*
void cambiarValor(string param) {
  param = "Adios";
}
*/

// Para cambiar el valor (paso por referencia)
void cambiarValor(string &param)
{
  param = "Adios";
}

int main()
{
  // Paso de una cadena a una función
  string arg = "Hola";
  cout << "Antes llamar funcion: " << arg << endl;
  cambiarValor(arg);
  cout << "Despues llamar funcion: " << arg << endl;
}