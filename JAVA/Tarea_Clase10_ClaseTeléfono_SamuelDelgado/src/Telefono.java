public class Telefono {
    // Encapsulamiento de atributos.
    private String marca;
    private String modelo;
    private double precio;

    // Constructor.
    public Telefono(String marca, String modelo, double precio) {
        this.marca = marca;
        this.modelo = modelo;
        setPrecio(precio); // Setter para validar los precios.
    }

    // Aquí se aplican los getters.
    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public double getPrecio() {
        return precio;
    }

    // Aquí se aplican los setters.
    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    // Setter para evitar que se acepten precios negativos.
    public void setPrecio(double precio) {
        if (precio >= 0) {
            this.precio = precio;
        } else {
            System.out.println("Error. El precio no puede ser negativo.");
        }
    }

    // Aquí se muestra la información del teléfono.
    public void mostrarInfo() {
        System.out.println("Marca: " + marca);
        System.out.println("Modelo: " + modelo);
        System.out.println("Precio: $" + precio);
        System.out.println("-------------------------");
    }
}