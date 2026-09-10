/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 4: Nota final con ponderaciones
Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la nota final.

Entrada: p1, p2, pf
Proceso: Cálculo de la nota final.
Salida: Mensaje con “La nota final es …”


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    double p1, p2, pf, nota_final;

    // Solicitar al usuario las calificaciones
    cout << "Ingrese la calificación del Parcial 1: ";
    cin >> p1;
    cout << "Ingrese la calificación del Parcial 2: ";
    cin >> p2;
    cout << "Ingrese la calificación del Proyecto Final: ";
    cin >> pf;

    // Cálculo de la nota final con ponderaciones
    nota_final = (p1 * 0.30) + (p2 * 0.30) + (pf * 0.40);

    // Mostrar el resultado
    cout << "La nota final es: " << nota_final << endl;

    return 0;
} 