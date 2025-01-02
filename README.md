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
