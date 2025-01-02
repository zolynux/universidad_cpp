#include <iostream>

using namespace std;

int main()
{
  // Introducir cadenas desde la consola

  // 1. Declarar variable
  string nombre;
  // 2. Solicitar el valor de entrada
  cout << "Proporciona tu nombre: ";
  // cin >> nombre; // No lee la linea completa,
  // sino hasta un espacio
  cin.ignore(); // Limpiar caracteres del buffer de la consola
  getline(cin, nombre);
  // 3. Desplegamos el valor
  cout << "Nombre proporcionado: " << nombre;

  return 0;
}
