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

Ejercicio 1 — Suma y promedio de 3 números
Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.


Entrada: 3 números enteros.
Proceso: Lectura de datos, cálculo de suma y promedio.
Salida: Suma y promedio de los 3 números ingresados.


*/

#include <iostream>
#include <string>
using namespace std;

int leerNumero(int numero) {
    int valor;
    cout << "Ingrese el número " << numero << ": ";
    cin >> valor;
    return valor;
}   

int calcularSuma(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}   

double calcularPromedio(int suma) {
    // Se usa double y static_cast para no perder los decimales
    return static_cast<double>(suma) / 3;
}   

// Se agrega la función encargada únicamente de la impresión
void mostrarResultados(int suma, double promedio) {
    cout << "\nRESULTADOS:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}

int main() {
    int numero1 = leerNumero(1);
    int numero2 = leerNumero(2);
    int numero3 = leerNumero(3);

    int suma = calcularSuma(numero1, numero2, numero3);
    double promedio = calcularPromedio(suma);

    // Se llama a la función de salida, la que mostrará la suma y el promedio.
    mostrarResultados(suma, promedio);

    return 0;
}

 