<<<<<<< HEAD
// main.cpp
#include <iostream>
#include <vector>
#include "Cancion.h"

int main() {
    std::vector<Cancion> canciones; // usamos vector para almacenar las canciones
    std::string titulo, artista;
    int duracion;

    // Repetir 2 veces con un for
    for (int i = 0; i < 2; i++) {
        std::cout << "\n=== Ingreso de Cancion " << i + 1 << " ===\n";
        std::cout << "Ingrese el titulo de la cancion: ";
        std::getline(std::cin, titulo);

        std::cout << "Ingrese el artista: ";
        std::getline(std::cin, artista);

        std::cout << "Ingrese la duracion en segundos: ";
        std::cin >> duracion;
        std::cin.ignore(); // limpiar buffer

        // Crear objeto y guardarlo en el vector
        canciones.emplace_back(titulo, artista, duracion);
    }

    // Mostrar todas las canciones al final
    std::cout << "\n=== Canciones Guardadas ===\n";
    for (size_t i = 0; i < canciones.size(); i++) {
        std::cout << "\nCancion " << i + 1 << ":\n";
        std::cout << "Titulo: " << canciones[i].getTitulo() << "\n";
        std::cout << "Artista: " << canciones[i].getArtista() << "\n";
        std::cout << "Duracion (segundos): " << canciones[i].getDuracion() << " seg\n";
        std::cout << "Duracion (mm:ss): " << canciones[i].getDuracionFormato() << "\n";
    }
=======
#include <iostream>
#include <vector>
#include <string>
#include "Producto.h"
#include "Cliente.h"
using namespace std;

int main() {
    // Crear productos disponibles en la tienda
    vector<Producto> catalogo = {
        Producto(1, "Laptop", 3500.0f),
        Producto(2, "Mouse", 50.0f),
        Producto(3, "Teclado", 120.0f),
        Producto(4, "Monitor", 900.0f),
        Producto(5, "Auriculares", 250.0f)
    };

    // Crear cliente
    string nombreCliente;
    cout << "Ingrese su nombre: ";
    getline(cin, nombreCliente);
    Cliente cliente(nombreCliente);

    cout << "\nBienvenido a la tienda, " << cliente.getNombre() << "!\n";

    int opcion;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Ver catalogo de productos\n";
        cout << "2. Agregar producto al carrito\n";
        cout << "3. Eliminar producto del carrito\n";
        cout << "4. Mostrar carrito\n";
        cout << "5. Facturar y salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "\n=== CATALOGO ===\n";
                for (const auto& p : catalogo) {
                    cout << "ID: " << p.getId()
                         << " | " << p.getNombre()
                         << " | $" << p.getPrecio() << "\n";
                }
                break;
            }
            case 2: {
                cout << "\n=== CATALOGO ===\n";
                for (const auto& p : catalogo) {
                    cout << "ID: " << p.getId()
                         << " | " << p.getNombre()
                         << " | $" << p.getPrecio() << "\n";
                }
                int id;
                cout << "Ingrese el ID del producto a agregar: ";
                cin >> id;
                bool encontrado = false;
                for (const auto& p : catalogo) {
                    if (p.getId() == id) {
                        cliente.getCarrito().agregarProducto(p);
                        cout << p.getNombre() << " agregado al carrito.\n";
                        encontrado = true;
                        break;
                    }
                }
                if (!encontrado) cout << "Producto no encontrado.\n";
                break;
            }
            case 3: {
                int id;
                cout << "Ingrese el ID del producto a eliminar: ";
                cin >> id;
                cliente.getCarrito().eliminarProducto(id);
                cout << "Producto eliminado (si existia).\n";
                break;
            }
            case 4: {
                cliente.getCarrito().mostrarContenido();
                break;
            }
            case 5: {
                cliente.getCarrito().facturar();
                cout << "Gracias por su compra, " << cliente.getNombre() << "!\n";
                break;
            }
            default:
                cout << "Opción inválida.\n";
        }
    } while (opcion != 5);
>>>>>>> 6bd3516 (Programa 2 del Taller de Ejercicios OOP propuestos en Clase)

    return 0;
}
