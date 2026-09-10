/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 6: Plan de internet (validación + recargo)
Escribe un algoritmo que reciba dos datos: el plan de internet y el consumo. El plan solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la tarifa base es 20 dólares y el límite incluido es 150.
Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se paga solo la tarifa base.
Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar “DATOS INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar.

Entrada: Plan de internet y consumo.
Proceso: Selección del plan y cálculos para ver el pago correspondiente.
Salida: “Datos inválidos” o “Su total a pagar es …”.



*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    int plan;
    double consumo, total_a_pagar;

    // Solicitar al usuario el plan y el consumo
    cout << "Ingrese el plan de internet (1 o 2): ";
    cin >> plan;
    cout << "Ingrese el consumo (número mayor o igual a cero): ";
    cin >> consumo;

    // Validar los datos ingresados
    if ((plan != 1 && plan != 2) || consumo < 0) {
        cout << "DATOS INVÁLIDOS" << endl;
        return 1; // Salir del programa con un código de error
    }

    // Cálculo del total a pagar según el plan y el consumo
    if (plan == 1) {
        total_a_pagar = 12.0; // Tarifa base para el plan 1
        if (consumo > 80) {
            total_a_pagar += (consumo - 80) * 0.25; // Recargo por excedente
        }
    } else if (plan == 2) {
        total_a_pagar = 20.0; // Tarifa base para el plan 2
        if (consumo > 150) {
            total_a_pagar += (consumo - 150) * 0.25; // Recargo por excedente
        }
    }

    // Mostrar el resultado
    cout << "Su total a pagar es: $" << total_a_pagar << endl;

    return 0;
}