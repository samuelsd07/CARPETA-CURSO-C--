public class Mascota {
    // Atributos de la mascota.
    String nombre;
    String especie;
    int edad;

    // Constructor
    public Mascota(String nombre, String especie, int edad) {
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
    }

    // Aquí se va a imprimir la información.
    public void mostrarInfo() {
        System.out.println("Mascota [Nombre: " + nombre + ", Especie: " + especie + ", Edad: " + edad + " años]");
    }
}