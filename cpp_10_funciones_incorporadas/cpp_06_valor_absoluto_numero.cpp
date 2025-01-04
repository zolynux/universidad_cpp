#include <iostream>
using namespace std;

int main()
{
  // Valor absoluto de una numero
  int numero, numeroAbs;
  cout << "Proporciona valor numero: ";
  cin >> numero;
  // Valor absoluto usando la funcion abs
  numeroAbs = abs(numero);
  cout << "Valor absoluto de " << numero << " es: " << numeroAbs << endl;
}