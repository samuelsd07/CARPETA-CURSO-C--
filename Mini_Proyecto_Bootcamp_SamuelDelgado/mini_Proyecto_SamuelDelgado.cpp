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

    