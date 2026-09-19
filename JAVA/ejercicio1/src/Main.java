import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Personaje> personajes = new ArrayList<>();
        int opcion = 0;

        while (opcion != 4) {
            System.out.println("\n========== MENU ==========");
            System.out.println("1. Registrar personaje");
            System.out.println("2. Mostrar personajes");
            System.out.println("3. Buscar personaje por ID");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opción: ");

            try {
                opcion = sc.nextInt();
                sc.nextLine(); // Limpiar el buffer del scanner

                if (opcion == 1) {
                    System.out.print("Elegir el tipo (1 = Guerrero, 2 = Mago): ");
                    int tipo = sc.nextInt();
                    sc.nextLine();

                    if (tipo != 1 && tipo != 2) {
                        System.out.println("Tipo no valido.");
                    } else {
                        System.out.print("Ingresar ID: ");
                        int id = sc.nextInt();
                        sc.nextLine();

                        System.out.print("Ingresar nombre: ");
                        String nombre = sc.nextLine();

                        System.out.print("Ingresar nivel: ");
                        int nivel = sc.nextInt();
                        sc.nextLine();

                        // Validación de los datos:
                        if (id <= 0) {
                            System.out.println("El ID debe ser mayor a 0.");
                        } else if (nombre.equals("")) {
                            System.out.println("El nombre no puede estar vacio.");
                        } else if (nivel < 1 || nivel > 100) {
                            System.out.println("El nivel debe estar entre 1 y 100.");
                        } else {
                            // Crear y guardar el personaje
                            if (tipo == 1) {
                                Guerrero g = new Guerrero(id, nombre, nivel);
                                personajes.add(g);
                            } else {
                                Mago m = new Mago(id, nombre, nivel);
                                personajes.add(m);
                            }
                            System.out.println("Personaje registrado con éxito.");
                        }
                    }

                } else if (opcion == 2) {
                    if (personajes.isEmpty()) {
                        System.out.println("La lista esta vacia.");
                    } else {
                        for (Personaje p : personajes) {
                            p.mostrarInfo();
                            System.out.println("Accion: " + p.realizarAccion());
                            System.out.println("--------------------");
                        }
                    }

                } else if (opcion == 3) {
                    if (personajes.isEmpty()) {
                        System.out.println("La lista esta vacia.");
                    } else {
                        System.out.print("Ingrese el ID a buscar: ");
                        int idBuscar = sc.nextInt();
                        sc.nextLine();

                        boolean encontrado = false;
                        for (Personaje p : personajes) {
                            if (p.getId() == idBuscar) {
                                p.mostrarInfo();
                                System.out.println("Accion: " + p.realizarAccion());
                                encontrado = true;
                                break;
                            }
                        }

                        if (!encontrado) {
                            System.out.println("Personaje no encontrado");
                        }
                    }

                } else if (opcion == 4) {
                    System.out.println("Saliendo del programa...");
                } else {
                    System.out.println("Opcion no valida.");
                }

            } catch (Exception e) {
                System.out.println("Error. Debe ingresar un valor numerico.");
                sc.nextLine(); // Se limpia el error realizado en la entrada.
            }
        }

        sc.close();
    }
}