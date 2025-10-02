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

    return 0;
}
