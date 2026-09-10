/*
Autor: Samuel José Delgado Chacón.
Fecha: 08 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 3 — Tabla de multiplicar repetitiva
Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
tabla de multiplicar del 1 al 10.
Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
correctamente.

Pista: también puedes resolver este ejercicio con for, ya que la tabla se repite una
cantidad fija de veces. Si quieres practicar más, también puedes intentar hacerlo con
while.

Entrada: Número entero.
Proceso: Calcular la tabla de multiplicar del 1 al 10.
Salida: Tabla de multiplicar.


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número entero
    cout << "Ingrese un número entero para generar su tabla de multiplicar: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar del 1 al 10
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    // Mensaje final
    cout << "La tabla de multiplicar del " << numero << " fue generada correctamente." << endl;

    return 0;
}