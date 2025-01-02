#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Dirección Memoria de una variable en C++

  // Tipo entero
  int entero = 10;
  cout << "Entero: " << entero << endl;
  // Dirección memoria de la variable
  cout << "Dir. memoria: " << &entero << endl;
  
  return 0;
}
