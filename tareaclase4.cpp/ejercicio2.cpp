/*
Autor: Samuel José Delgado Chacón.
Fecha: 05 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.

Ejercicio 2: Área y perímetro de un rectángulo
Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos, debe calcular y mostrar el área y el perímetro del rectángulo.

Entrada: Base y altura de un rectángulo.
Proceso: Cálculo con fórmula del área y el perímetro del rectángulo.
Salida: Mensaje con “El área y el perímetro del rectángulo son …”


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de variables
    double base, altura, area, perimetro;

    // Solicitar al usuario la base y la altura del rectángulo
    cout << "Ingrese la base del rectángulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    // Cálculo del área y el perímetro del rectángulo
    area = base * altura;
    perimetro = 2 * (base + altura);

    // Mostrar el resultado
    cout << "El área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetro << endl;

    return 0;
}