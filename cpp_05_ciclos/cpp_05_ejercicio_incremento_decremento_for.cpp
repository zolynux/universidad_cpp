#include <iostream>
using namespace std;

int main()
{
  // Ciclo for
  // Incremento y Decremento de 3 en 3 con ciclo for
  cout << "Incremento de 3 en 3 (tope 10):" << endl;
  for (int i = 1; i <= 10; i += 3)
  {
    cout << i << " ";
  }
  cout << endl;

  cout << "Decremento de 3 en 3 (tope -10):" << endl;
  for (int i = 1; i >= -10; i -= 3)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}