import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        Refugio refugio = new Refugio();
        int opcion = 0;

        while (opcion != 5) {
            System.out.println("\n== MENÚ DEL REFUGIO ==");
            System.out.println("1. Registrar animal");
            System.out.println("2. Mostrar animales");
            System.out.println("3. Buscar animal por ID");
            System.out.println("4. Adoptar animal");
            System.out.println("5. Salir");
            System.out.print("Seleccione una opción: ");

            try {
                opcion = Integer.parseInt(tec.nextLine());

                if (opcion == 1) {
                    System.out.print("Seleccione el tipo (1 = Perro, 2 = Gato): ");
                    int tipo = Integer.parseInt(tec.nextLine());

                    if (tipo != 1 && tipo != 2) {
                        System.out.println("Tipo de animal inválido.");
                    } else {
                        System.out.print("Ingrese el ID: ");
                        int id = Integer.parseInt(tec.nextLine());

                        if (id <= 0) {
                            System.out.println("El ID debe ser mayor a 0.");
                        } else if (refugio.buscarPorId(id) != null) {
                            System.out.println("Inválido. Ya existe un animal con ese ID.");
                        } else {
                            System.out.print("Ingrese el nombre: ");
                            String nombre = tec.nextLine();

                            if (nombre.trim().isEmpty()) {
                                System.out.println("El nombre no puede estar vacío.");
                            } else {
                                System.out.print("Ingrese la edad: ");
                                int edad = Integer.parseInt(tec.nextLine());

                                if (edad < 0) {
                                    System.out.println("La edad no puede ser negativa.");
                                } else {
                                    if (tipo == 1) {
                                        System.out.print("Ingrese la raza: ");
                                        String raza = tec.nextLine();
                                        if (raza.trim().isEmpty()) {
                                            System.out.println("La raza no puede estar vacía.");
                                        } else {
                                            Perro p = new Perro(id, nombre, edad, raza);
                                            refugio.registrarAnimal(p);
                                            System.out.println("Perro registrado con éxito.");
                                        }
                                    } else {
                                        System.out.print("Ingrese el color: ");
                                        String color = tec.nextLine();
                                        if (color.trim().isEmpty()) {
                                            System.out.println("El color no puede estar vacío.");
                                        } else {
                                            Gato g = new Gato(id, nombre, edad, color);
                                            refugio.registrarAnimal(g);
                                            System.out.println("Gato registrado con éxito.");
                                        }
                                    }
                                }
                            }
                        }
                    }

                } else if (opcion == 2) {
                    refugio.mostrarAnimales();

                } else if (opcion == 3) {
                    System.out.print("Ingrese el ID a buscar: ");
                    int idBuscar = Integer.parseInt(tec.nextLine());
                    Animal encontrado = refugio.buscarPorId(idBuscar);

                    if (encontrado != null) {
                        System.out.println("\n--- ANIMAL ENCONTRADO ---");
                        encontrado.mostrarInformacion();
                        encontrado.realizarAccion();
                    } else {
                        System.out.println("Animal no encontrado.");
                    }

                } else if (opcion == 4) {
                    System.out.print("Ingrese el ID del animal a adoptar: ");
                    int idAdoptar = Integer.parseInt(tec.nextLine());
                    refugio.adoptarAnimal(idAdoptar);

                } else if (opcion == 5) {
                    System.out.println("Saliendo del programa, gracias por su visita...");

                } else {
                    System.out.println("Opción inválida. Debe ingresar un número entre 1 y 5.");
                }

            } catch (NumberFormatException e) {
                System.out.println("Error: Debe ingresar un número válido.");
            }
        }

        tec.close();
    }
}