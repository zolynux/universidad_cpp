#include <iostream>
using namespace std;

int main()
{
  // Ciclo for
  // Suma Acumulativa
  int contador = 0;
  cout << "Suma Acumulativa:" << endl;
  for (int i = 1; i <= 5; i++)
  {
    contador += i;
    cout << i;
    (contador == 15) ? cout << " = " << contador : cout << " + ";
  }

  return 0;
}