/*
Autor: Samuel José Delgado Chacón.
Fecha: 10 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.
Paralelo: A (Lunes, Miércoles y Viernes).

Requisitos generales
• Todos los ejercicios deben resolverse usando funciones.
• Evita hacer toda la lógica dentro de main.
• Usa nombres claros para tus funciones.
• Cuando tenga sentido, separa:
o lectura de datos,
o cálculo,
o impresión de resultados.
• Usa paso por referencia solo cuando realmente sea necesario.
• Prueba tus programas con al menos un caso normal y un caso borde.
• Cada ejercicio debe compilar y ejecutarse correctamente.

Ejercicio 4 — Intercambio de dos números
Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• Mostrar los valores antes del intercambio,
• Realizar el intercambio usando una función,
• Mostrar los valores después del intercambio.

Entrada: Ingresar 2 números enteros.
Proceso: Lectura de datos, intercambio de valores mediante función.
Salida: Mostrar los valores antes y después del intercambio.

*/


#include <iostream>
#include <string>
using namespace std;

// Lectura de cada número
int leerNumero(const string& mensaje) {
    int valor;
    cout << mensaje;
    cin >> valor;
    return valor;
}   

// Intercambio de números.
void intercambiar(int &a, int &b) {
    int temporal = a;
    a = b;
    b = temporal;
}

// Función para mostrar los resultados antes y despúes que se dé el intercambio.
void mostrarValores(const string& estado, int a, int b) {
    cout << "\nValores " << estado << " del intercambio:" << endl;
    cout << "Número 1: " << a << endl;
    cout << "Número 2: " << b << endl;
}

int main() {
    // Ingreso de los dos números.
    int num1 = leerNumero("Ingrese el primer número: ");
    int num2 = leerNumero("Ingrese el segundo número: ");

    // Números antes del intercambio.
    mostrarValores("antes", num1, num2);

    // Proceso durante el intercambio.
    intercambiar(num1, num2);

    // Números después del intercambio.
    mostrarValores("después", num1, num2);

    return 0;
}