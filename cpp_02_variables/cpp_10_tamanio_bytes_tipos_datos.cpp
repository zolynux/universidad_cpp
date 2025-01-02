#include <iostream>

using namespace std;

int main()
{
  // Obtener el tamanio en bytes de cada tipo de dato
  int entero;
  float flotante;
  double doble;
  char caracter;
  bool booleano;
  string cadena = "Hola Mundo";
  // Imprimir cada variable (tamanio en bytes)
  cout << "int tamanio bytes: " << sizeof(entero) << endl;
  cout << "float tamanio bytes: " << sizeof(flotante) << endl;
  cout << "double tamanio bytes: " << sizeof(doble) << endl;
  cout << "char tamanio bytes: " << sizeof(caracter) << endl;
  cout << "bool tamanio bytes: " << sizeof(booleano) << endl;
  cout << "cadena tamanio length: " << cadena.length() << endl;
  cout << "cadena tamanio size: " << cadena.size() << endl;

  return 0;
}