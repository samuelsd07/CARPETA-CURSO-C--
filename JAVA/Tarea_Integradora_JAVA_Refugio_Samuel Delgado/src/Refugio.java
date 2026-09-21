import java.util.ArrayList;

public class Refugio {
    private ArrayList<Animal> animales;

    public Refugio() {
        animales = new ArrayList<>();
    }

    public boolean registrarAnimal(Animal animal) {
        // Verificar si el ID ya existe antes de guardar
        if (buscarPorId(animal.getId()) != null) {
            System.out.println("Inválido. El ID ya existe.");
            return false;
        }
        animales.add(animal);
        return true;
    }

    public Animal buscarPorId(int id) {
        for (int i = 0; i < animales.size(); i++) {
            Animal a = animales.get(i);
            if (a.getId() == id) {
                return a;
            }
        }
        return null;
    }

    public void mostrarAnimales() {
        if (animales.size() == 0) {
            System.out.println("No existen animales registrados en el refugio.");
        } else {
            System.out.println("\n--- LISTADO DE ANIMALES ---");
            for (int i = 0; i < animales.size(); i++) {
                Animal a = animales.get(i);
                a.mostrarInformacion();
                a.realizarAccion();
                System.out.println("-------------------------");
            }
        }
    }

    public boolean adoptarAnimal(int id) {
        Animal a = buscarPorId(id);
        
        if (a == null) {
            System.out.println("Animal no encontrado.");
            return false;
        }
        
        if (a.getEstado().equals("ADOPTADO")) {
            System.out.println("El animal ya fue adoptado.");
            return false;
        }

        a.setEstado("ADOPTADO");
        System.out.println("¡El animal " + a.getNombre() + " ha sido adoptado!");
        return true;
    }
}