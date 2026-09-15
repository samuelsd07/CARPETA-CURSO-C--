/*
Autor: Samuel José Delgado Chacón.
Fecha: 10 - 09 - 2026
Bootcamp Curso de Fundamentos de la Programación Orientada a Objetos por Jonathan Torres.
Paralelo: A (Lunes, Miércoles y Viernes).

MINI PROYECTO MOVECARD
Sistema de registro y pago de tarjeta para transporte público.

Entrada: Elegir una de las 6 opciones del menú de MOVECARD y regitrar, ingresar o buscar una tarjeta.
Proceso: Ingreso de tarjeta, búsqueda, cálculos del saldo y pagos.
Salida: Registro exitoso de tarjeta, saldo actual, reporte general.

*/

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
    cout << "5. Recarga con bonificacion (Aspecto Creativo)\n";
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

// 3. Mostrar el listado de tarjetas registradas
void mostrarTarjetas(const string codigos[], const double saldos[], const int tipos[], int total) {
    // Validacion de caso borde: Sin datos ingresados
    if (total == 0) {
        cout << "\nNo hay tarjetas registradas todavia.\n";
        return;
    }

    cout << "\n---------------------------------------------------\n";
    cout << "N°\tCODIGO UID\tSALDO ($)\tTIPO\n";
    cout << "---------------------------------------------------\n";
    for (int i = 0; i < total; i++) {
        string nombreTipo = "General";
        if (tipos[i] == 2) {
            nombreTipo = "Estudiantil";
        } else if (tipos[i] == 3) {
            nombreTipo = "Tercera Edad";
        }

        cout << (i + 1) << "\t" << codigos[i] << "\t\t$" << saldos[i] << "\t\t" << nombreTipo << "\n";
    }
}

// 4. Buscar una tarjeta mediante Búsqueda Secuencial
void buscarTarjeta(const string codigos[], const double saldos[], const int tipos[], int total) {
    if (total == 0) {
        cout << "\nNo existen datos para realizar la busqueda.\n";
        return;
    }

    string codigoBuscado;
    cout << "\nIngrese el codigo UID a buscar: ";
    cin >> codigoBuscado;

    bool encontrado = false;
    for (int i = 0; i < total; i++) {
        if (codigos[i] == codigoBuscado) {
            string nombreTipo = "General";
            if (tipos[i] == 2) nombreTipo = "Estudiantil";
            if (tipos[i] == 3) nombreTipo = "Tercera Edad";

            cout << "\n--- TARJETA ENCONTRADA ---\n";
            cout << " - Codigo: " << codigos[i] << "\n";
            cout << " - Saldo: $" << saldos[i] << "\n";
            cout << " - Tipo de usuario: " << nombreTipo << "\n";
            
            encontrado = true;
            break; // Detener la busqueda por coincidencias.
        }
    }

    if (!encontrado) {
        cout << "\nLa tarjeta " << codigoBuscado << " no esta registrada.\n";
    }
}

// 5. Reporte general:
void mostrarReporteGeneral(const string codigos[], const double saldos[], const int tipos[], int total) {
    if (total == 0) {
        cout << "\nRegistre tarjetas para ver el reporte general.\n";
        return;
    }

    double sumaSaldos = 0;
    int posicionMayor = 0;
    int contadorEstudiantes = 0;

    for (int i = 0; i < total; i++) {
        sumaSaldos = sumaSaldos + saldos[i];

        // Calculo del mayor valor
        if (saldos[i] > saldos[posicionMayor]) {
            posicionMayor = i;
        }

        // Conteo con condicion
        if (tipos[i] == 2) {
            contadorEstudiantes++;
        }
    }

    double promedio = sumaSaldos / total;

    cout << "\n=========================================\n";
    cout << "         REPORTE GENERAL DE RED          \n";
    cout << "=========================================\n";
    cout << "1. Saldo promedio acumulado: $" << promedio << "\n";
    cout << "2. Tarjeta con mayor saldo: " << codigos[posicionMayor] << " ($" << saldos[posicionMayor] << ")\n";
    cout << "3. Cantidad de tarjetas estudiantiles: " << contadorEstudiantes << "\n";
    
}

// 6. Componente Creativo: Recarga con bonificacion automatica por categoria
void ejecutarComponenteCreativo(const string codigos[], double saldos[], const int tipos[], int total) {
    if (total == 0) {
        cout << "\nNo hay tarjetas para recargar.\n";
        return;
    }

    string codigoBuscado;
    cout << "\n--- RECARGA CON BONIFICACION ESPECIAL ---\n";
    cout << "Ingrese el codigo UID de la tarjeta a recargar: ";
    cin >> codigoBuscado;

    int indice = -1;
    for (int i = 0; i < total; i++) {
        if (codigos[i] == codigoBuscado) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        cout << "La tarjeta ingresada no existe.\n";
        return;
    }

    double montoRecarga = 0;
    cout << "Ingrese el monto a recargar ($1.00 a $50.00):$";
    cin >> montoRecarga;

    while (montoRecarga < 1.0 || montoRecarga > 50.0) {
        cout << "El monto permitido es de $1.00 a $50.00:$";
        cin >> montoRecarga;
    }

    double regalo = 0;
    if (tipos[indice] == 2) { 
        regalo = montoRecarga * 0.20; // 20% extra a estudiantes
        cout << ">> ¡Beneficio aplicado! +20% extra por Tarjeta Estudiantil.\n";
    } else if (tipos[indice] == 3) { 
        regalo = montoRecarga * 0.30; // 30% extra a tercera edad
        cout << ">> ¡Beneficio aplicado! +30% extra por Tarjeta Tercera Edad.\n";
    }

    double totalAcreditado = montoRecarga + regalo;
    saldos[indice] = saldos[indice] + totalAcreditado;

    cout << "\n--- RESUMEN DE LA TRANSACCION ---\n";
    cout << " - Recarga ingresada: $" << montoRecarga << "\n";
    cout << " - Saldo regalo     : $" << regalo << "\n";
    cout << " - Saldo final nuevo: $" << saldos[indice] << "\n";
}