#include <iostream>
using namespace std;

void saludar(string mensaje)
{
  cout << "Mensaje: " << mensaje << endl;
  // return ;
}

int main()
{
  // Procedimiento en C++
  string mensajeArg;
  cout << "Proporciona el mensaje a mostrar: ";
  getline(cin, mensajeArg);
  // Llamar al procedimiento
  saludar(mensajeArg);
}