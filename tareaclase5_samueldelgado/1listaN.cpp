/*
Autor: Samuel José Delgado Chacón.
Fecha: 08 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 1 — Números pares hasta N
Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
muestre en pantalla todos los números pares desde 1 hasta N.

Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
de error.
Pista: en este ejercicio se recomienda usar while, porque te ayudará a controlar una
variable que va avanzando paso a paso hasta llegar al límite.

Entrada: Número entero positivo N.
Proceso: Mostrar todos los números pares desde 1 hasta N.
Salida: Lista de números pares.

*/

#include <iostream>
using namespace std;

int main() {
    int N;

    // Pedir el número hasta que sea positivo
    while (true) {
        cout << "Ingrese un número entero positivo N: ";
        cin >> N;

        if (N > 0) {
            break; // El número es válido, salir del ciclo
        }

        cout << "Inválido: Debe ingresar un número entero positivo mayor que 0." << endl;
    }

    // Mostrar los números pares desde 1 hasta N
    cout << "Los números pares desde 1 hasta " << N << " son:" << endl;

    int i = 2;

    while (i <= N) {
        cout << i << " ";
        i += 2;
    }

    cout << endl;

    return 0;
}