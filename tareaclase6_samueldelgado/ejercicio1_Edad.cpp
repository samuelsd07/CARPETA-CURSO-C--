/*
Nombre: Samuel José Delgado Chacón.  
Paralelo: A (Lunes, Miércoles y Viernes).
Profesor: Jonathan Torres.
Fecha: 08 - 09 - 2026.

Ejercicio 1 — Registro de edades
Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo. Luego, el programa debe:
1.	Mostrar todas las edades registradas junto con su posición
2.	Pedir al usuario una edad adicional para buscar dentro del arreglo
3.	Indicar si esa edad fue encontrada o no
4.	En caso de encontrarla, mostrar la posición de la primera coincidencia 
Pista:
Recuerde que primero debe declarar el arreglo, después cargar los datos con un for, luego recorrerlo para mostrar los valores y finalmente usar otro recorrido para realizar la búsqueda secuencial.

Entrada: 8 edades enteras en un arreglo.
Proceso: Ubicar cada edad con su posición respectiva y además pedir una edad adicional.
Salida: Indicar si la nueva edad fue encontrada o no, y si fue encontrada mostrar la posición de la primera coincidencia.


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int cantidad = 8;
    int edades[cantidad];
    int edadBuscada;
    bool encontrada = false;
    int posicion = -1;

    // Solicitar al usuario ingresar 8 edades
    cout << "Ingrese 8 edades enteras:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Edad " << (i + 1) << ": ";
        cin >> edades[i];
    }

    // Mostrar todas las edades registradas junto con su posición
    cout << "\nEdades registradas:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << "Posición " << i << ": " << edades[i] << endl;
    }

    // Pedir al usuario una edad adicional para buscar dentro del arreglo
    cout << "\nIngrese una edad para buscar: ";
    cin >> edadBuscada;

    // Buscar la edad en el arreglo
    for (int i = 0; i < cantidad; ++i) {
        if (edades[i] == edadBuscada) {
            encontrada = true;
            posicion = i;
            break; // Salir del bucle al encontrar la primera coincidencia
        }
    }

    // Indicar si la edad fue encontrada o no
    if (encontrada) {
        cout << "La edad " << edadBuscada << " fue encontrada en la posición: " << posicion << ". Se convierte así en la primera coincidencia." << endl;
    } else {
        cout << "La edad " << edadBuscada << " no fue encontrada en el arreglo." << endl;
    }

    return 0;
}


