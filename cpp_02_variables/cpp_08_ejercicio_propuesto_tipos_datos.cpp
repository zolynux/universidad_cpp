#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Solucion Ejercicio Tipos de Datos
  string nombreCompleto;
  int edad;
  float sueldo;
  bool empleadoConfianza;
  // Lee la informacion de la consola
  cout << "Proporciona tu nombre: ";
  getline(cin, nombreCompleto);
  cout << "Proporciona tu edad: ";
  cin >> edad;
  cout << "Proporciona tu sueldo (USD): ";
  cin >> sueldo;
  cout << "Eres empleado de confianza (1-true/0-false)?" << endl;
  cin >> empleadoConfianza;
  // Imprimir la informacion
  cout << endl;
  cout << "La informacion proporcionada es:" << endl;
  cout << "Nombre: " << nombreCompleto << endl;
  cout << "Edad: " << edad << endl;
  cout << fixed << setprecision(2);
  cout << "Sueldo: " << sueldo << endl;
  cout << "Empleado de confianza: " << empleadoConfianza << endl;
  return 0;
}