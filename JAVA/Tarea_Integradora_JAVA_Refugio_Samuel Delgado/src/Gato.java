public class Gato extends Animal {
    private String color;

    public Gato(int id, String nombre, int edad, String color) {
        super(id, nombre, edad);
        this.color = color;
    }

    public String getColor() {
        return color;
    }

    @Override
    public void mostrarInformacion() {
        super.mostrarInformacion();
        System.out.println("Color: " + color);
    }

    @Override
    public void realizarAccion() {
        System.out.println(getNombre() + " juega con una pelota de lana y un juguete de plástico.");
    }
}