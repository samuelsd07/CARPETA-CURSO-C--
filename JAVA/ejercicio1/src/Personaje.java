public class Personaje {
    private int id;
    private String nombre;
    private int nivel;

    // Constructor
    public Personaje(int id, String nombre, int nivel) {
        this.id = id;
        this.nombre = nombre;
        this.nivel = nivel;
    }

    // Getters
    public int getId() {
        return id;
    }

    public String getNombre() {
        return nombre;
    }

    public int getNivel() {
        return nivel;
    }

    // Metodo para mostrar la informacion
    public void mostrarInfo() {
        System.out.println("ID: " + id + ", Nombre: " + nombre + ", Nivel: " + nivel);
    }

    // Metodo base para la accion
    public String realizarAccion() {
        return "El personaje realiza una accion";
    }
}
