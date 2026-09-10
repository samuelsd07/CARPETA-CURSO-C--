/*
Autor: Samuel José Delgado Chacón.
Fecha: 08 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 4 — Menú repetitivo
Elaborar un programa en C++ que muestre el siguiente menú:
1. Mostrar el doble de un número
2. Mostrar el triple de un número
3. Salir
El programa debe repetirse hasta que el usuario elija la opción 3.
Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
error y volver a mostrar el menú.
Pista: en este ejercicio se recomienda usar do while, porque el menú debe mostrarse
al menos una vez, además se debe usar if / else.


Entrada: Solicitar al usuario una opción del menú y un número entero.
Proceso: Realizar la operación correspondiente según la opción seleccionada, ya sea el doble, el triple o salir del menú.
Salida: Resultado de la operación (doble o triple del número).

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;
    int numero;

    do {
        // Mostrar el menú
        cout << "Menú:" << endl;
        cout << "1. Mostrar el doble de un número" << endl;
        cout << "2. Mostrar el triple de un número" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opción (1-3): ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese un número entero: ";
            cin >> numero;
            cout << "El doble de " << numero << " es: " << (numero * 2) << endl;
        } else if (opcion == 2) {
            cout << "Ingrese un número entero: ";
            cin >> numero;
            cout << "El triple de " << numero << " es: " << (numero * 3) << endl;
        } else if (opcion == 3) {
            cout << "Saliendo del programa, gracias por su visita." << endl;
        } else {
            cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
        }

        cout << endl; // Línea en blanco para separar las iteraciones del menú

    } while (opcion != 3);

    return 0;
}

