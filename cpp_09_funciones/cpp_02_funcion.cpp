#include <iostream>
using namespace std;

int sumar(int a, int b)
{
  int resultado = a + b;
  return resultado;
}

int main()
{
  // Funcioens en C++
  int argA, argB;
  cout << "Proporciona el valor de numero 'a': ";
  cin >> argA;
  cout << "Proporciona el valor de numero 'b': ";
  cin >> argB;
  // Llamamos a la función
  int resultado = sumar(argA, argB);
  cout << "Resultado suma: " << resultado << endl;
}