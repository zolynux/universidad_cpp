# Universidad C++ Aprende el Lenguaje C++ desde Cero

---

- [Universidad C++ Aprende el Lenguaje C++ desde Cero](#universidad-c-aprende-el-lenguaje-c-desde-cero)
  - [Introducción a C++](#introducción-a-c)
    - [C++ es un Lenguaje Compilado](#c-es-un-lenguaje-compilado)
    - [¿Qué es una función?](#qué-es-una-función)
    - [Hola Mundo en C++](#hola-mundo-en-c)
  - [Variables en C++](#variables-en-c)
    - [Tipos de Memoria](#tipos-de-memoria)
      - [¿Qué es una variable?](#qué-es-una-variable)
      - [Visualización de la Memoria](#visualización-de-la-memoria)
    - [Tipos de Datos en C++](#tipos-de-datos-en-c)
    - [Ejemplo de Variables en C++](#ejemplo-de-variables-en-c)
    - [Ejemplo de Tipos de Datos en C++](#ejemplo-de-tipos-de-datos-en-c)
    - [Cadena en C++](#cadena-en-c)
    - [Modo Debug en C++](#modo-debug-en-c)
    - [Dirección de Memoria de una Variable en C++](#dirección-de-memoria-de-una-variable-en-c)
    - [Introducir Datos por Consola en C++](#introducir-datos-por-consola-en-c)
    - [Introducir una Cadena en C++](#introducir-una-cadena-en-c)
    - [Ejercicio Propuesto: Tipo de Datos en C++](#ejercicio-propuesto-tipo-de-datos-en-c)
    - [Constantes en C++](#constantes-en-c)
    - [Tamaño en Bytes de los Tipos de Datos en C++](#tamaño-en-bytes-de-los-tipos-de-datos-en-c)
  - [Operadores en C++](#operadores-en-c)
    - [Operadores Aritméticos](#operadores-aritméticos)
    - [Operadores de Incremento/Decremento en C++](#operadores-de-incrementodecremento-en-c)
    - [Ejercicio Operadores de Incremento y Decremento en C++](#ejercicio-operadores-de-incremento-y-decremento-en-c)
    - [Operadores de Asignación en C++](#operadores-de-asignación-en-c)
    - [Operadores de Comparación ó Relacionales en C++](#operadores-de-comparación-ó-relacionales-en-c)
      - [Los operadores de comparación en C++ son](#los-operadores-de-comparación-en-c-son)
    - [Operadores Lógicos en C++](#operadores-lógicos-en-c)
      - [Tabla de Verdad](#tabla-de-verdad)
        - [AND](#and)
        - [OR](#or)
        - [NOT](#not)
    - [Ejercicio Valor dentro de Rango en C++](#ejercicio-valor-dentro-de-rango-en-c)
    - [Ejercicio de Precedencia de Operadores en C++](#ejercicio-de-precedencia-de-operadores-en-c)

---

## Introducción a C++

- Lenguaje de propósito general
- Muy utiliza para crear todo tipo de aplicaciones, incluyendo video-juegos
- C++ es una mejora del lenguaje C, al añadir la programación orientada a objetos (POO).
- C++ también es conocido como cpp, ya que la "p" significa "plus" o "+" en inglés
- C++ fue presentado en 1985, y fue creado por Bjarne Stroustrup.

### C++ es un Lenguaje Compilado

- C++ al igual que el lenguaje C, son lenguajes compilados.
- Es decir, necesitamos de un compilador para primero convertir el código fuente a `bytecode` y finalmente poder ejecutar nuestro programa.
- Recordemos que tenemos lenguajes compilados e interpretados.
- Los lenguajes compilados, antes de poder ejecutar el código, primero se compila a `bytecode`.
- En cambio, los lenguajes interpretados van traduciendo y ejecutando el código línea a línea.

**Lenguajes Compilados:**

```mermaid
graph LR
A[Código Fuente] -->B[Compilador] --> C[Código Máquina] --> D[Salida]
```

**Lenguajes Interpretados:**

```mermaid
graph LR
A[Código Fuente] -->B[Intérprete] --> C[Salida]
```

### ¿Qué es una función?

Una función es un bloque de código que nos permite realizar alguna operación.

**Ejemplo:** Mandar a imprimir algo a consola.

```mermaid
graph LR
A[Entrada] -->B[Función] --> C[Salida]
```

### Hola Mundo en C++

```cpp
#include <iostream> // Libreria para la entrada y salida estandar
// namespace = espacio de nombres
using namespace std; // Usaermos objetos y funciones del namespace

// int -> Tipo de regreso
// main -> nombre  función principal
int main() {
   // Cuerpo de la función principal
   cout << "Hola Mundo en C++"; // cout es objeto que manda a imprimir información a la consola
   // "Hola mundo" --> Cadena de caracteres
   // >> -> Operador de inserción o de salida
   return 0; //-> Si regresa 0, el programa se ejecutó OK
} // Fin función main
```

**🟢 Ejecutar:**

```plaintext
Hola Mundo en C++
```

---

## Variables en C++

### Tipos de Memoria

**ROM:**
ROM = Read Only Memory
Memoria de Solo Lectura

Los datos almacenados aquí No se pueden modificar

**RAM:**
RAM = Random Access Memory
Memoria de Acceso Aleatorio

Esta memoria es de Lectura y Escritura.
Por lo tanto la usaremos para almacenar nuestros programas (Ej. Variables)

#### ¿Qué es una variable?

Una variable nos permite almacenar los datos de nuestros programas.

**Se compone de varios elementos:**

1. nombre
2. Valor almacenado (tipo de dato)
3. Dirección de memoria

**Ejemplo:** `int miVariable = 10;`

#### Visualización de la Memoria

```cpp
int miVariable = 10; // Un valor tipo int 0 cupa 4 bytes. -> 0x333 -> Memoria Stack
// ...
// ...
miVariable = 20; // un valor -> 0x334 -> Memoria Stack
```

### Tipos de Datos en C++

| Tipos de Datos | Significado                      | Ejemplo                  |
| -------------- | -------------------------------- | ------------------------ |
| `int`          | Entero                           | 10, -8, etc (4 bytes)    |
| `float`        | Real                             | 3.5, -6.9, etc (4 bytes) |
| `double`       | Real con más precisión que float | 3e39 (8 bytes)           |
| `char`         | Caracter                         | 'A' (1 byte)             |
| `bool`         | Lógico o Booleano                | true o false (1 byte)    |

### Ejemplo de Variables en C++

```cpp
#include <iostream>

using namespace std;

int main() {
  // 1. Declarar variables y asignar un valor
  int entero; // Declaración
  entero = 10; // Inicialización

  float flotante = 7.9;

  // 2. Imprimir las variables
  cout << "Entero: " << entero << endl;
  cout << "Flotante: " << flotante;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Entero: 10
Flotante: 7.9
```

### Ejemplo de Tipos de Datos en C++

```cpp
#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Tipos de Datos en C++

  // Tipo entero
  int entero = 10;
  cout << "Entero: " << entero << endl;
  // Tipo flotante
  float flotante = 8.9;
  cout << fixed << setprecision(2);
  cout << "Flotante: " << flotante << endl;
  // Tipo double
  double doble = 9.9999;
  cout << "Doble: " << doble << endl;
// Tipo chair
  char caracter = 'A';
  cout << "Caracter: " << caracter << endl;
  char caracterDecimal = 65; // A -> Ascii
  cout << "Caracter en Decimal: " << caracterDecimal << endl;
  // Tipo bool
  bool booleano = false; // true-1 o false-0
  cout << "Booleano: " << booleano << endl;
  
  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Entero: 10
Flotante: 8.90
Doble: 10.00
Caracter: A
Caracter en Decimal: A
Booleano: 0
```

### Cadena en C++

```cpp
#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Tipos de Datos en C++
  // Clase String
  string cadena = "Hola";
  cout << "Cadena: " << cadena;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Cadena: Hola
```

### Modo Debug en C++

```cpp
#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Tipos de Datos en C++

  // Tipo entero
  int entero = 10;
  cout << "Entero: " << entero << endl;
  // Tipo flotante
  float flotante = 8.9;
  cout << fixed << setprecision(2);
  cout << "Flotante: " << flotante << endl;
  // Tipo double
  double doble = 9.9999;
  cout << "Doble: " << doble << endl;
// Tipo chair
  char caracter = 'A';
  cout << "Caracter: " << caracter << endl;
  char caracterDecimal = 65; // A -> Ascii
  cout << "Caracter en Decimal: " << caracterDecimal << endl;
  // Tipo bool
  bool booleano = false; // true-1 o false-0
  cout << "Booleano: " << booleano << endl;

  // Clase String
  string cadena = "Hola";
  cout << "Cadena: " << cadena;
  
  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Entero: 10
Flotante: 8.90
Doble: 10.00
Caracter: A
Caracter en Decimal: A
Booleano: 0
Cadena: Hola
```

### Dirección de Memoria de una Variable en C++

`int miNumero = 10;` -> 0x333 ... 0x334

Obtener dirección memoria:

`&miNumero`

**Ejemplo:** `cout << "Dir. memoria: " << &miNumero;` --> Imprime 0x333

```cpp
#include <iostream>
#include <iomanip> // Input-Output-manipulation

using namespace std;

int main()
{
  // Dirección Memoria de una variable en C++

  // Tipo entero
  int entero = 10;
  cout << "Entero: " << entero << endl;
  // Dirección memoria de la variable
  cout << "Dir. memoria: " << &entero << endl;
  
  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Entero: 10
Dir. memoria: 0x821b1ff86c
```

### Introducir Datos por Consola en C++

```cpp
#include <iostream>

using namespace std;

int main()
{
  // Introducir datos desde la consola

  // 1. Declarar variable
  int entero;
  // 2. Solicitar el valor de entrada
  cout << "Proporciona un numero: ";
  cin >> entero;
  // 3. Desplegamos el valor
  cout << "Valor proporcionado: " << entero;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Proporciona un numero: 20
Valor proporcionado: 20
```

### Introducir una Cadena en C++

```cpp
#include <iostream>

using namespace std;

int main()
{
  // Introducir cadenas desde la consola

  // 1. Declarar variable
  string nombre;
  // 2. Solicitar el valor de entrada
  cout << "Proporciona tu nombre: ";
  // cin >> nombre; // No lee la linea completa,
  // sino hasta un espacio
  cin.ignore(); // Limpiar caracteres del buffer de la consola
  getline(cin, nombre);
  // 3. Desplegamos el valor
  cout << "Nombre proporcionado: " << nombre;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Proporciona tu nombre: Zolyn UX
Nombre proporcionado: Zolyn UX
```

### Ejercicio Propuesto: Tipo de Datos en C++

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Solucion Ejercicio Tipos de Datos
  string nombreCompleto;
  int edad;
  float sueldo;
  bool empleadoConfianza;
  // Lee la informacion de la consola
  cout << "Proporciona tu nombre: ";
  getline(cin, nombreCompleto);
  cout << "Proporciona tu edad: ";
  cin >> edad;
  cout << "Proporciona tu sueldo (USD): ";
  cin >> sueldo;
  cout << "Eres empleado de confianza (1-true/0-false)?" << endl;
  cin >> empleadoConfianza;
  // Imprimir la informacion
  cout << endl;
  cout << "La informacion proporcionada es:" << endl;
  cout << "Nombre: " << nombreCompleto << endl;
  cout << "Edad: " << edad << endl;
  cout << fixed << setprecision(2);
  cout << "Sueldo: " << sueldo << endl;
  cout << "Empleado de confianza: " << empleadoConfianza << endl;
  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Proporciona tu nombre: David UX
Proporciona tu edad: 32
Proporciona tu sueldo (USD): 450.3
Eres empleado de confianza (1-true/0-false)?
1

La informacion proporcionada es:
Nombre: David UX
Edad: 32
Sueldo: 450.3
Empleado de confianza: 1
```

### Constantes en C++

`const <tipo> <nombre> = valor;`

**Ejemplo:** `const int MI_CONSTANTE = 100;`

Una vez definido el valor de una constante, ya que no podemos modificarlo.

```cpp
#include <iostream>
#include <cmath>
// Use math defines
// #define _USE_MATH_DEFINES

using namespace std;

int main()
{
  // Definir constantes en C++
  const int MI_CONSTANTE = 100;
  // MI_CONSTANTE = 20; // read-only o de solo lectura.

  const float PI = 3.1416;
  cout << "Mi constante: " << MI_CONSTANTE << endl;
  cout << "Constante PI: " << PI << endl;
  cout << "Constante Matematica PI: " << M_PI << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Mi constante: 100
Constante PI: 3.1416
Constante Matematica PI: 3.14159
```

### Tamaño en Bytes de los Tipos de Datos en C++

```cpp
#include <iostream>

using namespace std;

int main()
{
  // Obtener el tamanio en bytes de cada tipo de dato
  int entero;
  float flotante;
  double doble;
  char caracter;
  bool booleano;
  string cadena = "Hola Mundo";
  // Imprimir cada variable (tamanio en bytes)
  cout << "int tamanio bytes: " << sizeof(entero) << endl;
  cout << "float tamanio bytes: " << sizeof(flotante) << endl;
  cout << "double tamanio bytes: " << sizeof(doble) << endl;
  cout << "char tamanio bytes: " << sizeof(caracter) << endl;
  cout << "bool tamanio bytes: " << sizeof(booleano) << endl;
  cout << "cadena tamanio length: " << cadena.length() << endl;
  cout << "cadena tamanio size: " << cadena.size() << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
int tamanio bytes: 4
float tamanio bytes: 4
double tamanio bytes: 8
char tamanio bytes: 1
bool tamanio bytes: 1
cadena tamanio length: 10
cadena tamanio size: 10
```

---

## Operadores en C++

Los operadores nos permiten realizar operaciones al usar valores y variables.

**Tipos de Operadores:**

- Aritméticos
- Asignación
- Comparación
- Lógicos

### Operadores Aritméticos

| Operadores | Significado               | Ejemplos  |
| ---------- | ------------------------- | --------- |
| +          | Suma                      | x + y     |
| -          | Resta                     | x - y     |
| *          | Multiplicación            | x * y     |
| /          | División                  | x / y     |
| %          | Modulo (Residua División) | x % y     |
| ++         | Incremento                | ++x o x++ |
| --         | Decremento                | --x o x-- |

---

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Operadores aritmeticos
  int a, b, c, f;
  float d;

  // suma +
  a = 3 + 4;
  cout << "Suma: " << a << endl;
  // Resta -
  b = 6 - 2;
  cout << "Resta: " << b << endl;
  // Multiplicacion *
  c = a * 2;
  cout << "Multiplicacion: " << c << endl;
  // Division
  d = b / 2.5;
  cout << "Division: " << d << endl;
  // Modulo (residuo division)
  f = 9 % 2;
  cout << "Modulo: " << f << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Suma: 7
Resta: 4
Multiplicacion: 14
Division: 1.6
Modulo: 1
```

### Operadores de Incremento/Decremento en C++

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Operadores Incremento
  int a = 0, b, c;
  // Operador Pre-Incremento
  ++a; // Se incrementa antes de ser utilizada nuevamente.
  cout << "Nuevo valor a (++a): " << a << endl;
  // Operador Post-Incremento
  a++; // Se incrementa hasta la siguiente vez que se utilice
  cout << "Nuevo valor a (a++): " << a << endl;

  // Operadores Decremento
  // Operador Pre-Decremento
  --a; // Se decrementa antes de ser utilizada nuevamente.
  cout << "Nuevo valor a (--a): " << a << endl;
  // Operador Post-Decremento
  a--; // Se decrementa hasta la siguiente vez que se utilice
  cout << "Nuevo valor a (a--): " << a << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Nuevo valor a (++a): 1
Nuevo valor a (a++): 2
Nuevo valor a (--a): 1
Nuevo valor a (a--): 0
```

### Ejercicio Operadores de Incremento y Decremento en C++

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Ejercicio Incremento / Decremento
  int a = 5, b = 2, c;
  c = ++a * b++;
  cout << "Valor a: " << a << endl;
  cout << "Valor b: " << b << endl;
  cout << "Valor c: " << c << endl;

  c = --a * b--;
  cout << endl;
  cout << "Valor a: " << a << endl;
  cout << "Valor b: " << b << endl;
  cout << "Valor c: " << c << endl;
  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Valor a: 6
Valor b: 3
Valor c: 12

Valor a: 5
Valor b: 2
Valor c: 15
```

### Operadores de Asignación en C++

| Operadores | Significado                  | Ejemplos |
| ---------- | ---------------------------- | -------- |
| =          | Asignación                   | x = 5    |
| +=         | Asignación Compuesto de Suma | x += 3   |

Tambien existen operadores compuestos de:

`+=`,`-=`,`*=`,`/=`,`%=`, entre varios más.

```cpp
#include <iostream>
using namespace std;

int main()
{

  // Operadores de Asignacioon
  // Operador = Para asignar un valor
  int miNum = 10;
  cout << "Valor miNum: " << miNum << endl;
  miNum = 20;
  cout << "Valor miNum: " << miNum << endl;

  // Operadores de asignacion compuesto
  // compuesto suma +=
  miNum += 5; // miNum = miNum + 5;
  cout << "Valor miNum: " << miNum << endl;
  // compuesto resta -=
  miNum -= 3; // miNum = miNum - 3;
  cout << "Valor miNum: " << miNum << endl;
  // compuesto Multiplicacion *=
  miNum *= 2; // miNum = miNum * 2;
  cout << "Valor miNum: " << miNum << endl;
  // compuesto division /=
  miNum /= 7; // miNum = miNum / 7;
  cout << "Valor miNum: " << miNum << endl;
  // compuesto modulo %=
  miNum %= 2; // miNum = miNum % 2;
  cout << "Valor miNum: " << miNum << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Valor miNum: 10
Valor miNum: 20
Valor miNum: 25
Valor miNum: 22
Valor miNum: 44
Valor miNum: 6
Valor miNum: 0
```

### Operadores de Comparación ó Relacionales en C++

Son operadores que comparan dos variables o expresiones, y el resultado es una expresión booleana que puede ser verdadera (true) o falsa (false).

#### Los operadores de comparación en C++ son

| Operador | Significado       | Ejemplo |
| -------- | ----------------- | ------- |
| >        | Mayor que         | a > b   |
| >=       | Mayor o igual que | a >= b  |
| <        | Menor que         | a < b   |
| <=       | Menor o igual que | a <= b  |
| ==       | igual que         | a == b  |
| !=       | Distinto que      | a != b  |

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Operadores Comparación o Relacionales
  int a = 5, b = 6;
  cout << "Valor a: " << a << endl;
  cout << "Valor b: " << b << endl;
  // Operador Igualdad ==
  bool c = a == b;
  cout << " a igual que b?: " << c << endl;

  // Operador Distinto !=
  c = a != b;
  cout << " a distinto que b?: " << c << endl;

  // Operador Mayor que
  c = a > b;
  cout << " a Mayor que b?: " << c << endl;

  // Operador Mayor o igualdad que
  c = a >= b;
  cout << " a Mayor o igual que b?: " << c << endl;

  // Operador Menor que
  c = a < b;
  cout << " a Menor que b?: " << c << endl;

  // Operador menor o igual que
  c = a <= b;
  cout << " a Menor o Igual que b?: " << c << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Valor a: 5
Valor b: 6
 a igual que b?: 0
 a distinto que b?: 1
 a Mayor que b?: 0
 a Mayor o igual que b?: 0
 a Menor que b?: 1
 a Menor o Igual que b?: 1
```

### Operadores Lógicos en C++

Los operadores lógicos se utilizan para realizar operaciones booleanas. Los principales operadores lógicos son:

| Operador     | Nombre     | Ejemplo                 | Resultado |
| ------------ | ---------- | ----------------------- | --------- |
| `&&`         | AND Lógico | `true && false`         | `false`   |
| &#124;&#124; | OR Lógico  | true &#124;&#124; false | `true`    |
| `!`          | NOT Lógico | `!true`                 | `false`   |

#### Tabla de Verdad

Muestra el comportamiento de los operadores lógicos:

##### AND

Regresa verdadero si ambos valores lógicos son verdaderos

| A     | B     | A && B |
| ----- | ----- | ------ |
| true  | true  | true   |
| true  | false | false  |
| false | true  | false  |
| false | false | false  |

##### OR

Regresa verdadero si cualquiera de los operadores es verdadero

| A     | B     | A &#124;&#124; B |
| ----- | ----- | ---------------- |
| true  | true  | true             |
| true  | false | true             |
| false | true  | true             |
| false | false | false            |

##### NOT

Inverte el resultado lógico true -> false o false -> true

| A     | !A    |
| ----- | ----- |
| true  | false |
| false | true  |

---

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Operadores Logicos

  bool a = true, b = false, c;
  cout << "Valor a: " << a << endl;
  cout << "Valor b: " << b << endl;
  // Operador and (&&)
  // Regresa verdadero si ambos operandos son verdaderos
  c = a && b;
  cout << "Resultado operador and: " << c << endl;

  // Operador or (||)
  // Regresa verdadero si cualquiera de los operandos es verdadero
  c = a || b;
  cout << "Resultado operador or: " << c << endl;

  // Operador not (!)
  // Invierte el valor original (true -> false, false -> true)
  c = !a;
  cout << "Resultado operador not: " << c << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Valor a: 1
Valor b: 0
Resultado operador and: 0
Resultado operador or: 1
Resultado operador not: 0
```

### Ejercicio Valor dentro de Rango en C++

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Validar si un valor esta dentro de rango

  const int MINIMO = 0, MAXIMO = 5;
  // Solicitar un valor entre 0 y 5
  int dato;
  cout << "Proporciona una dato entre 0 y 5: ";
  cin >> dato;
  // Verificar si el dato esta dentro de rango
  bool dentroRango = dato >= MINIMO && dato <= MAXIMO;
  cout << "Valor dentro de rango?: " << dentroRango << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Proporciona una dato entre 0 y 5: 2
Valor dentro de rango?: 1
```

### Ejercicio de Precedencia de Operadores en C++

```cpp
#include <iostream>
using namespace std;

int main()
{
  // Precedencia de Operadores en C
  // 1. Parentesis y Corchetes
  // 2. Operadores unarios, como -, ++, --, !
  // 3. Aritmeticos *, / y %
  // 4. Aritmeticos + y -
  // 5. Relacionales <, <=, > y >=
  // 6. Igualdad/distinto == y !=
  // 7. Logicos && y ||
  // 8. Asignacion =, +=, -=, *=, etc.

  // Ejemplo: Se revisa de izquierda a derecha
  // int a = 12 / (3 + 2) * 3 - 1;
  int a = 12 / 3 + 2 * 3 - 1;
  cout << "Resultado: " << a << endl;

  return 0;
}
```

**🟢 Ejecutar:**

```plaintext
Resultado: 9
```

---
