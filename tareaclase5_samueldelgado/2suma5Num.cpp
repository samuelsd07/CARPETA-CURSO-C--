/*
Autor: Samuel José Delgado Chacón.
Fecha: 08- 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 2 — Suma de 5 números
Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
suma total de esos valores.
Al final, el programa debe mostrar:
• la suma total
• y cuántos números fueron ingresados
Pista: en este ejercicio se recomienda usar for, porque ya sabes desde el inicio
cuántas repeticiones habrá.

Entrada: Solicitar 5 números enteros al usuario.
Proceso: Calcular la suma total de los números ingresados.
Salida: La suma total y la cantidad de números ingresados.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int suma = 0;
    int numero;

    // Solicitar 5 números enteros al usuario
    for (int i = 1; i <= 5; ++i) {
        cout << "Ingrese el número entero " << i << ": ";
        cin >> numero;
        suma += numero; // Acumular la suma
    }

    // Mostrar la suma total y la cantidad de números ingresados
    cout << "La suma total de los 5 números ingresados es: " << suma << endl;
    cout << "Cantidad de números ingresados: 5" << endl;

    return 0;
}