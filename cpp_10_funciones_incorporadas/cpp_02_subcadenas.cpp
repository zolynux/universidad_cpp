#include <iostream>
using namespace std;

int main()
{
  // Subcadena
  string cadena = "Hola Mundo";
  // Subcadena de Hola
  // string substri(inicio, cantidad de caracteres a copiar)
  string subcadena1 = cadena.substr(0, 4);
  cout << "subcadena1: " << subcadena1 << endl;
  string subcadena2 = cadena.substr(5, 5);
  cout << "subcadena2: " << subcadena2 << endl;
}