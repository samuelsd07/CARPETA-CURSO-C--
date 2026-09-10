/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 3: Descuento por edad
Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.

Entrada: Edad 
Proceso: Validar si la edad es de 18 o más o si es menor a 18.
Salida: El precio final que deberá pagar la persona por si edad.


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    int edad;
    double precio;

    // Solicitar al usuario la edad
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    // Determinar el precio según la edad
    if (edad >= 18) {
        precio = 5.0;
    } else {
        precio = 2.50;
    }

    // Mostrar el resultado
    cout << "El precio a pagar es: $" << precio << endl;

    return 0;
}