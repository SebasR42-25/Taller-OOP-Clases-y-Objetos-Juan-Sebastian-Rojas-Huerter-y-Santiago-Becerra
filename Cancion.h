// Cancion.h
// Created by Sebas on 9/30/2025.

#ifndef MUSIC_CANCION_H
#define MUSIC_CANCION_H

#include <string>

class Cancion {
private:
    std::string titulo;
    std::string artista;
    int duracion;

public:
    // Constructor
    Cancion(std::string titulo, std::string artista, int duracion);

    // Estos son los Getters
    std::string getTitulo() const;
    std::string getArtista() const;
    int getDuracion() const;

    std::string getDuracionFormato() const;
};

#endif // MUSIC_CANCION_H
