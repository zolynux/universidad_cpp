#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Tipos de Datos en C++

  // Tipo entero
  int entero = 10;
  cout << "Entero: " << entero << endl;
  // Tipo flotante
  float flotante = 8.9;
  cout << fixed << setprecision(2);
  cout << "Flotante: " << flotante << endl;
  // Tipo double
  double doble = 9.9999;
  cout << "Doble: " << doble << endl;
// Tipo chair
  char caracter = 'A';
  cout << "Caracter: " << caracter << endl;
  char caracterDecimal = 65; // A -> Ascii
  cout << "Caracter en Decimal: " << caracterDecimal << endl;
  // Tipo bool
  bool booleano = false; // true-1 o false-0
  cout << "Booleano: " << booleano << endl;
  
  return 0;
}
