#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Redondeo y Truncado
  float numero = 8.5;
  int redondeo, truncado;
  // Round -> Mayor .5 se redondea al numero superior mas cercano
  redondeo = round(numero);
  cout << "Valor " << numero << " redondeado: " << redondeo << endl;
  // Operacion truncado (trunc)
  // Trunc omite la parte de punto flotante
  truncado = trunc(numero);
  cout << "Valor " << numero << " truncado " << truncado << endl;
}