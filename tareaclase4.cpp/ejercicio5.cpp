/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 5: Reparto de horas en semanas, días y horas
Escribe un algoritmo que reciba un número entero de horas totales (un valor no
negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.

Entrada: Número entero no negativo.
Proceso: Conversión de esas horas a semanas, días y ver horas sobrantes.
Salida: Mostrar en un mensaje “Sobran … semanas, … días y … horas.”



*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declaración de variables
    int horas_totales, semanas, dias, horas_sobrantes;

    // Repetir hasta que el usuario ingrese un dato válido
    do {
        cout << "Ingrese el número total de horas (entero no negativo): ";
        cin >> horas_totales;

        if (horas_totales < 0) {
            cout << "Dato inválido. Por favor, ingrese un número no negativo." << endl;
        }

    } while (horas_totales < 0);

    // Cálculo de semanas, días y horas sobrantes
    semanas = horas_totales / 168;
    dias = (horas_totales % 168) / 24;
    horas_sobrantes = horas_totales % 24;

    // Mostrar el resultado
    cout << "Sobran " << semanas << " semanas, "
         << dias << " días y "
         << horas_sobrantes << " horas." << endl;

    return 0;
}