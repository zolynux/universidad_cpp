#include <iostream>
using namespace std;

int main()
{
  // Ciclo do while
  // Solicitamos un valor positivo
  int numero;
  do
  {
    cout << "Proporciona un valor positivo: ";
    cin >> numero;
  } while (numero <= 0);
  cout << "Valor positivo: " << numero << endl;

  return 0;
}