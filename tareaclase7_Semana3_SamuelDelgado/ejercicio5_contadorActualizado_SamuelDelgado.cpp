/*
Autor: Samuel José Delgado Chacón.
Fecha: 10 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.
Paralelo: A (Lunes, Miércoles y Viernes).

Requisitos generales
• Todos los ejercicios deben resolverse usando funciones.
• Evita hacer toda la lógica dentro de main.
• Usa nombres claros para tus funciones.
• Cuando tenga sentido, separa:
o lectura de datos,
o cálculo,
o impresión de resultados.
• Usa paso por referencia solo cuando realmente sea necesario.
• Prueba tus programas con al menos un caso normal y un caso borde.
• Cada ejercicio debe compilar y ejecutarse correctamente.

Ejercicio 5 — Contador actualizado con referencia
Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.

Entrada: Ingresar un número entero positivo n.
Proceso: Lectura de datos, incremento del contador mediante función con paso por referencia.
Salida: Mostrar el valor del contador en cada incremento hasta llegar al número n.

*/

#include <iostream>
#include <string>
using namespace std;

// Lectura de un número positivo
int leerNumeroPositivo() {
    int valor;
    do {
        cout << "Ingrese un número entero positivo: ";
        cin >> valor;
        if (valor < 0) {
            cout << "Inválido: El número debe ser positivo (>= 0)." << endl;
        }
    } while (valor < 0);
    return valor;
}   

// Aquí se pasa el valor por referencia.
void incrementarContador(int &contador) {
    contador++;
}   

// Impresión de lo que arrojará el contador por incremento.
void mostrarContador(int valor) {
    cout << "Contador: " << valor << endl;
}

int main() {
    int n = leerNumeroPositivo();
    int contador = 0;

    cout << "\n--- LISTA DEL CONTADOR ---" << endl;
    mostrarContador(contador); // Inicio del contador

    // Se aplica el main para un mejor control del incremento hasta n.
    while (contador < n) {
        incrementarContador(contador); // Cambio por referencia.
        mostrarContador(contador);     // Se muestra el resultado
    }

    return 0;
}