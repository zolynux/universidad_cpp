#include <iostream>
using namespace std;

int main()
{
  // Convertir numero a cadena, to_string()
  int a = 10, b = 20;
  cout << a + b << endl;
  // Convertir
  string resultado = to_string(a) + to_string(b);
  cout << "Resultado: " << resultado << endl;
}