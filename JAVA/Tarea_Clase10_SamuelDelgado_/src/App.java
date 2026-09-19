/*
Tarea de Clase Mascota.
Curso de Fundamentos de la Programación por Jonathan Torres.
Autor: Samuel Delgado.
Fecha: 19-09-2026.

*/
public class App {
    public static void main(String[] args) {
        // 5. Crear dos objetos de tipo Mascota
        Mascota mascota1 = new Mascota("Firulais", "Perro", 3);
        Mascota mascota2 = new Mascota("Oso", "Gato", 2);

        // 6. Mostrar información de las mascotas en consola
        mascota1.mostrarInfo();
        mascota2.mostrarInfo();
    }
}