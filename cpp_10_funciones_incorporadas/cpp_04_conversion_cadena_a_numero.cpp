#include <iostream>
using namespace std;

int main()
{
  // Conversion de cadena a numero
  // stoi - string to int
  string a = "10", b = "20";
  cout << a + b << endl;
  // Conversion
  int c = stoi(a) + stoi(b);
  cout << c << endl;
}