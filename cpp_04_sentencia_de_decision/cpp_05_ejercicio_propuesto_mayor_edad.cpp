#include <iostream>
using namespace std;

int main()
{
  // Mayor de edad
  int edad;
  bool MAYOR = edad >= 18;
  cout << "Proporciona tu edad: ";
  cin >> edad;

  if (MAYOR)
    cout << "La persona con edad " << edad << " es un adulto" << endl;
  else if ((!MAYOR) && edad > 0)
    cout << "La persona con edad " << edad << " es un menor de edad" << endl;
  else
    cout << "Ingresaste es invalido" << endl;

  return 0;
}