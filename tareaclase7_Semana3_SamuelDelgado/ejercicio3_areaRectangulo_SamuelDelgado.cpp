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

Ejercicio 3 — Área de un rectángulo
Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.

Entrada: Ingresar base y altura del rectángulo.
Proceso: Lectura de datos, cálculo del área.
Salida: Mostrar el área del rectángulo.

*/

#include <iostream>
#include <string>
using namespace std;

double leerBase() {
    double base;
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    return base;
}   

double leerAltura() {
    double altura;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;
    return altura;
}   

double calcularArea(double base, double altura) {
    return base * altura;
}   

void mostrarResultado(double area) {
    cout << "\nRESULTADO FINAL:" << endl;
    cout << "El área del rectángulo es: " << area << endl;
}   

int main() {
    double base = leerBase();
    double altura = leerAltura();
    double area = calcularArea(base, altura);
    mostrarResultado(area);
    return 0;
}   