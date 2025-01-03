#include <iostream>
using namespace std;

int main()
{
  // Ciclo while
  // Suma Acumulativa
  int contador = 0, i = 0;
  cout << "Usa 'while'" << endl;
  cout << "Suma Acumulativa:" << endl;
  while (i <= 5)
  {
    contador += i;
    cout << i;
    (contador == 15) ? cout << " = " << contador : cout << " + ";
    i++;
  }

  cout << endl
       << "Usa 'do while'" << endl;
  // Ciclo do while
  // Suma Acumulativa
  contador = 0, i = 0;
  cout << "Suma Acumulativa:" << endl;
  do
  {
    contador += i;
    cout << i;
    (contador == 15) ? cout << " = " << contador : cout << " + ";
    i++;
  } while (i <= 5);

  return 0;
}