/*
Nombre del estudiante: Samuel José Delgado Chacón.
Paralelo: A (Lunes, Miércoles y Viernes).
Profesor: Jonathan Torres.
Fecha: 09/09/2026

Tema: Sistema de registro y análisis de notas

Entrada: Cantidad: 20 , nombres, notas, opción del menú y nombre a buscar.
Proceso: Validar, almacenar, recorrer, calcular y buscar.
Salida: Reporte general y resultado de búsqueda.

*/

#include <iostream>
#include <string>

using namespace std;

// Constante para el límite máximo de estudiantes
const int MAX_ESTUDIANTES = 20;

// Declaración / Prototipos de funciones
int mostrarMenu();
void registrarEstudiantes(string nombres[], float notas[], int &cantidad);
void mostrarReporte(const string nombres[], const float notas[], int cantidad);
void buscarEstudiante(const string nombres[], const float notas[], int cantidad);

int main() {
    string nombres[MAX_ESTUDIANTES];
    float notas[MAX_ESTUDIANTES];
    int cantidad = 0; // Controla cuántos estudiantes hay registrados (0 = sin datos)
    int opcion;

    do {
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                registrarEstudiantes(nombres, notas, cantidad);
                break;
            case 2:
                if (cantidad == 0) {
                    cout << "\n Error: Todavia no existen datos registrados.\n";
                } else {
                    mostrarReporte(nombres, notas, cantidad);
                }
                break;
            case 3:
                if (cantidad == 0) {
                    cout << "\n Error: Todavia no existen datos registrados.\n";
                } else {
                    buscarEstudiante(nombres, notas, cantidad);
                }
                break;
            case 4:
                cout << "\nSaliendo del programa. Gracias por su visita.\n";
                break;
            default:
                cout << "\n Opcion inválida. Intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}

// Función para desplegar el menú y retornar la opción seleccionada
int mostrarMenu() {
    int opcion;
    cout << "\n=========== MENU ===========" << endl;
    cout << "1. Registrar estudiantes y notas" << endl;
    cout << "2. Mostrar reporte general" << endl;
    cout << "3. Buscar estudiante por nombre" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    return opcion;
}

// Función para registrar la cantidad, nombres y notas válidas
void registrarEstudiantes(string nombres[], float notas[], int &cantidad) {
    cout << "\n--- REGISTRO DE ESTUDIANTES ---" << endl;
    
    // Validación de la cantidad de estudiantes (1 a 20)
    do {
        cout << "Ingrese la cantidad de estudiantes (1 - 20): ";
        cin >> cantidad;
        if (cantidad < 1 || cantidad > MAX_ESTUDIANTES) {
            cout << "Cantidad inválida. Debe ser entre 1 y 20." << endl;
        }
    } while (cantidad < 1 || cantidad > MAX_ESTUDIANTES);

    // Registro individual
    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante #" << (i + 1) << ":" << endl;
        cout << "  Nombre (primer nombre sin espacios): ";
        cin >> nombres[i];

        // Validación de nota (0 a 20)
        do {
            cout << "  Nota (0 - 20): ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 20) {
                cout << "  Nota inválida. Debe estar en la escala de 0 a 20." << endl;
            }
        } while (notas[i] < 0 || notas[i] > 20);
    }

    cout << "\n Datos registrados exitosamente.\n";
}

// Función para generar el reporte general, estadisticas y listado
void mostrarReporte(const string nombres[], const float notas[], int cantidad) {
    cout << "\n================ REPORTE GENERAL ================" << endl;
    
    float sumaNotas = 0;
    int aprobados = 0;
    int reprobados = 0;

    int indiceMayor = 0;
    int indiceMenor = 0;

    // Listado numérico
    cout << "\nLISTADO DE ESTUDIANTES:" << endl;
    for (int i = 0; i < cantidad; i++) {
        string estado = (notas[i] >= 14.0) ? "APROBADO" : "REPROBADO";
        cout << i + 1 << ". " << nombres[i] << " - Nota: " << notas[i] << " [" << estado << "]" << endl;

        // Suma para el promedio
        sumaNotas += notas[i];

        // Conteo de aprobados y reprobados
        if (notas[i] >= 14.0) {
            aprobados++;
        } else {
            reprobados++;
        }

        // Búsqueda de mayor y menor nota (primera coincidencia)
        if (notas[i] > notas[indiceMayor]) {
            indiceMayor = i;
        }
        if (notas[i] < notas[indiceMenor]) {
            indiceMenor = i;
        }
    }

    float promedio = sumaNotas / cantidad;

    // Reporte de datos calculados
    cout << "\nRESUMEN ESTADISTICO:" << endl;
    cout << "- Promedio general: " << promedio << endl;
    cout << "- Estudiante con nota mayor: " << nombres[indiceMayor] << " (" << notas[indiceMayor] << ")" << endl;
    cout << "- Estudiante con nota menor: " << nombres[indiceMenor] << " (" << notas[indiceMenor] << ")" << endl;
    cout << "- Cantidad de aprobados: " << aprobados << endl;
    cout << "- Cantidad de reprobados: " << reprobados << endl;
    cout << "=================================================" << endl;
}

// Función para realizar la búsqueda secuencial exacta por nombre
void buscarEstudiante(const string nombres[], const float notas[], int cantidad) {
    string nombreBuscar;
    cout << "\n--- BUSCAR ESTUDIANTE ---" << endl;
    cout << "Ingrese el nombre a buscar: ";
    cin >> nombreBuscar;

    bool encontrado = false;

    for (int i = 0; i < cantidad; i++) {
        if (nombres[i] == nombreBuscar) {
            string estado = (notas[i] >= 14.0) ? "APROBADO" : "REPROBADO";
            cout << "\n Estudiante encontrado:" << endl;
            cout << "  Nombre: " << nombres[i] << endl;
            cout << "  Nota: " << notas[i] << endl;
            cout << "  Estado: " << estado << endl;
            encontrado = true;
            break; // Muestra la primera coincidencia y sale del bucle
        }
    }

    if (!encontrado) {
        cout << "\n El estudiante '" << nombreBuscar << "' no se encuentra en el registro.\n";
    }
}