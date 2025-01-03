#include <iostream>
using namespace std;

int main()
{
  // Mayor de edad
  int diaSemana;
  cout << "Proporciona un numero de dia de la semana: ";
  cin >> diaSemana;

  if (diaSemana == 1)
    cout << "Lunes" << endl;
  else if (diaSemana == 2)
    cout << "Martes" << endl;
  else if (diaSemana == 3)
    cout << "Miercoles" << endl;
  else if (diaSemana == 4)
    cout << "Jueves" << endl;
  else if (diaSemana == 5)
    cout << "Viernes" << endl;
  else if (diaSemana == 6)
    cout << "Sabado" << endl;
  else if (diaSemana == 7)
    cout << "Domingo" << endl;
  else
    cout << "Ingresaste es invalido" << endl;

  return 0;
}