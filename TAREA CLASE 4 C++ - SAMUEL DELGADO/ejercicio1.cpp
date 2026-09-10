/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 1: Conversión de temperatura
Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.

Entrada: Temperatura en grados Celsius.
Proceso: Conversión con fórmula de grados Celsius a Fahrenheit.
Salida: Temperatura en grados Fahrenheit.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    double celsius, fahrenheit;

    // Solicitar al usuario la temperatura en grados Celsius
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Conversión de Celsius a Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Mostrar el resultado
    cout << celsius << " grados Celsius son equivalentes a " << fahrenheit << " grados Fahrenheit." << endl;

    return 0;
}