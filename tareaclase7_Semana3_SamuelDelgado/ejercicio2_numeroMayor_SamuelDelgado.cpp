/*
Autor: Samuel José Delgado Chacón.
Fecha: 10 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

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

Ejercicio 2 — Número mayor entre dos valores
Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.

Entrada: Ingresar 2 valores enteros.
Proceso: Leer los valores, compararlos y determinar cuál es mayor o si son iguales.
Salida: Mostrar cuál de los dos valores es mayor, y si son igual mostrarlo de igual forma.

*/

#include <iostream>
#include <string>
using namespace std;

// Lectura de un número por valor
int leerNumero(const string& mensaje) {
    int valor;
    cout << mensaje;
    cin >> valor;
    return valor;
}   

// Proceso: Determina el mayor y modifica 'sonIguales' por referencia
int determinarMayor(int num1, int num2, bool &sonIguales) {
    if (num1 == num2) {
        sonIguales = true;
        return num1; // Si son iguales, retorna cualquiera de los dos
    }
    
    sonIguales = false;
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}   

// Impresión de resultados
void mostrarResultado(int num1, int num2, int mayor, bool sonIguales) {
    cout << "\nRESULTADO:" << endl;
    if (sonIguales) {
        cout << "Los números " << num1 << " y " << num2 << " son iguales." << endl;
    } else {
        cout << "El número mayor entre " << num1 << " y " << num2 << " es: " << mayor << endl;
    }
}

int main() {
    // 1. Lectura 
    int num1 = leerNumero("Ingrese el primer número: ");
    int num2 = leerNumero("Ingrese el segundo número: ");

    // Variables para recibir el cálculo y el valor por referencia
    bool sonIguales = false;

    // 2. Cálculo
    int mayor = determinarMayor(num1, num2, sonIguales);

    // 3. Salida
    mostrarResultado(num1, num2, mayor, sonIguales);

    return 0;
}