/*
Tarea de Clase Telefono.
Curso de Fundamentos de la Programación por Jonathan Torres.
Autor: Samuel Delgado.
Fecha: 19-09-2026.

*/


public class App {
    public static void main(String[] args) {
        // Creación de objeto tipo telefono.
        Telefono t1 = new Telefono("Samsung", "A51", 467.0);

        System.out.println("--- Datos iniciales ---");
        t1.mostrarInfo();

        // Cambio de precio válido
        System.out.println("Actualizando a un precio valido...");
        t1.setPrecio(280.0);
        t1.mostrarInfo();

        // Prueba de cambio de precio inválido (que sea negativo)
        System.out.println("Intentando ingresar un precio invalido...");
        t1.setPrecio(-50.0);
        t1.mostrarInfo();
    }
}
