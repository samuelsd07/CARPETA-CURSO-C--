/*
Nombre: Samuel José Delgado Chacón.  
Paralelo: A (Lunes, Miércoles y Viernes).
Profesor: Jonathan Torres.
Fecha: 08 - 09 - 2026.

Ejercicio 2 — Registro de cantidades vendidas
Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de productos vendidos durante el día en un arreglo.
Luego, el programa debe:
1.	Mostrar todas las cantidades ingresadas
2.	Pedir al usuario una cantidad específica para buscar
3.	Indicar si esa cantidad se encuentra dentro del arreglo
4.	Mostrar la posición donde aparece por primera vez, o un mensaje indicando que no fue encontrada
Pista:
Para resolver este ejercicio, puede usar una variable bandera, por ejemplo, encontrado, que al inicio tenga el valor false y cambie a true cuando el dato buscado aparezca dentro del arreglo.



Entrada: 6 cantidades enteras de productos vendidos en un día de arreglo.
Proceso: Buscar en la lista la opción ingresada por el usuario y determinar si aparece o no.
Salida: Mensaje indicando si esa cantidad aparece y mostrando su posición donde aparece por primera vez o un mensaje que diga si no aparece.

*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    const int cantidad = 6;
    int ventas[cantidad];
    int cantidadBuscada;
    bool encontrada = false;
    int posicion = -1;

    // Solicitar al usuario ingresar 6 cantidades de productos vendidos
    cout << "Ingrese 6 cantidades enteras de productos vendidos durante el día:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Cantidad " << (i + 1) << ": ";
        cin >> ventas[i];
    }

    // Mostrar todas las cantidades ingresadas
    cout << "\nCantidades registradas:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Posición " << i << ": " << ventas[i] << endl;
    }

    // Pedir al usuario una cantidad específica para buscar
    cout << "\nIngrese una cantidad específica para buscar: ";
    cin >> cantidadBuscada;

    // Buscar la cantidad en el arreglo
    for (int i = 0; i < cantidad; ++i) {
        if (ventas[i] == cantidadBuscada) {
            encontrada = true;
            posicion = i;
            break; // Salir del bucle al encontrar la primera coincidencia
        }
    }

    // Indicar si la cantidad fue encontrada o no
    if (encontrada) {
        cout << "La cantidad " << cantidadBuscada << " fue encontrada en la posición: " << posicion << ". Por lo que se convierte en la primera coincidencia." << endl;
    } else {
        cout << "La cantidad " << cantidadBuscada << " no fue encontrada en el arreglo." << endl;
    }

    return 0;
}
