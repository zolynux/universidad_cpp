#include <iostream>
using namespace std;

int main()
{
  // Mayor de edad
  int diaSemana;
  cout << "Proporciona un numero de dia de la semana: ";
  cin >> diaSemana;

  switch (diaSemana)
  {
  case 1:
    cout << "Lunes" << endl;
    break;
  case 2:
    cout << "Martes" << endl;
    break;
  case 3:
    cout << "Miercoles" << endl;
    break;
  case 4:
    cout << "Jueves" << endl;
    break;
  case 5:
    cout << "Viernes" << endl;
    break;
  case 6:
    cout << "Sabado" << endl;
    break;
  case 7:
    cout << "Domingo" << endl;
    break;
  default:
    cout << "Ingresaste es invalido" << endl;
  }
  return 0;
}