#include <iostream>
using namespace std;

// Variable global
int variableGlobal = 5;

// Cambio
void cambio(int variableLocalFuncion)
{
  // Modificamos el valor de la variable local
  variableLocalFuncion = 40;
  // Modificamos la variable global
  // variableGlboal = 50;

  // Redefinir la variable global (oculta la variable global)
  // Esto ya es una variable local al metodo cambio
  int variableGlobal = 60;
}

int main()
{
  // Variables locales
  int variableLocal = 10;
  // Modificar la variable global
  variableGlobal = 20;
  // llamar una funcion
  cambio(30);
  // Imprimimos las variables
  cout << "Variable local (main): " << variableLocal << endl;
  cout << "Variable global: " << variableGlobal << endl;
}