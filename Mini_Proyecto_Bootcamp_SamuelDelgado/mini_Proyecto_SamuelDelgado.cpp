#include <iostream>
#include <string>

using namespace std;

// Límite de tarjetas:
const int max_registro = 20;

// Funciones a utilizar en el programa principal:
void mostrarMenu();
void registrarTarjeta(string codigos[], double saldos[], int tipos[], int &total);
void mostrarTarjetas(const string codigos[], const double saldos[], const int tipos[], int total);
void buscarTarjeta(const string codigos[], const double saldos[], const int tipos[], int total);
void mostrarReporteGeneral(const string codigos[], const double saldos[], const int tipos[], int total);
void ejecutarComponenteCreativo(const string codigos[], double saldos[], const int tipos[], int total);

int main() {
    // Arreglos para almacenar los datos:
    string codigos[max_registro];
    double saldos[max_registro];
    int tipos[max_registro]; // Para las diferentes categorías de usuarios.
    
    int totalRegistros = 0; // Contador de tarjetas guardadas
    int opcion = 0;

    // Bucle repetitivo para el menu principal
    do {
        mostrarMenu();
        cin >> opcion;

        // Validacion para ver si lo que se ingresa es válido o inválido.
        while (opcion < 1 || opcion > 6) {
            cout << "Opcion no valida. Ingrese un numero entre 1 y 6: ";
            cin >> opcion;
        }

        switch (opcion) {
            case 1:
                registrarTarjeta(codigos, saldos, tipos, totalRegistros);
                break;
            case 2:
                mostrarTarjetas(codigos, saldos, tipos, totalRegistros);
                break;
            case 3:
                buscarTarjeta(codigos, saldos, tipos, totalRegistros);
                break;
            case 4:
                mostrarReporteGeneral(codigos, saldos, tipos, totalRegistros);
                break;
            case 5:
                ejecutarComponenteCreativo(codigos, saldos, tipos, totalRegistros);
                break;
            case 6:
                cout << "\nGracias por usar MoveCard. Hasta una próxima ocasión...\n";
                break;
        }

    } while (opcion != 6);

    return 0;
}

// 1. Menú de opciones:
void mostrarMenu() {
    cout << "\n=========================================\n";
    cout << "     SISTEMA DE TARJETAS MOVECARD        \n";
    cout << "=========================================\n";
    cout << "1. Registrar tarjeta MoveCard\n";
    cout << "2. Mostrar todas las tarjetas\n";
    cout << "3. Buscar tarjeta por codigo UID\n";
    cout << "4. Ver reporte general de saldos\n";
    cout << "5. Recarga con bonificacion (Creativo)\n";
    cout << "6. Salir\n";
    cout << "=========================================\n";
    cout << "Seleccione una opcion: ";
}

// 2. Registro de tarjetas:
void registrarTarjeta(string codigos[], double saldos[], int tipos[], int &total) {
    // Validacion de caso borde: Limite maximo de 20 registros
    if (total >= max_registro) {
        cout << "\nNo se pueden agregar mas tarjetas. Limite alcanzado (20).\n";
        return;
    }

    cout << "\n--- NUEVO REGISTRO DE TARJETA [" << (total + 1) << "/20] ---\n";
    cout << "Ingrese el codigo UID de la tarjeta (ej. MC-101): ";
    cin >> codigos[total];

    // Validacion para el saldo.
    cout << "Ingrese el saldo inicial ($): ";
    cin >> saldos[total];
    while (saldos[total] < 0.0 || saldos[total] > 100.0) {
        cout << "[ERROR] El saldo debe estar entre $0.00 y $100.00:$";
        cin >> saldos[total];
    }

    // Validacion para las diferentes tarifas.
    cout << "Seleccione tipo (1: General, 2: Estudiantil, 3: Tercera Edad): ";
    cin >> tipos[total];
    while (tipos[total] < 1 || tipos[total] > 3) {
        cout << "[ERROR] Tipo no valido. Ingrese 1, 2 o 3: ";
        cin >> tipos[total];
    }

    total++;
    cout << ">> ¡Tarjeta registrada exitosamente!\n";
}

