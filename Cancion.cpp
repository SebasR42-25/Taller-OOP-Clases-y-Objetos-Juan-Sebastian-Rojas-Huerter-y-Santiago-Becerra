// Created by Sebas on 9/30/2025.
// Cancion.cpp

#include "Cancion.h"
#include <sstream>
#include <iomanip>

Cancion::Cancion(std::string titulo, std::string artista, int duracion)
    : titulo(titulo), artista(artista), duracion(duracion) {}

std::string Cancion::getTitulo() const {
    return titulo;
}

std::string Cancion::getArtista() const {
    return artista;
}

int Cancion::getDuracion() const {
    return duracion;
}

std::string Cancion::getDuracionFormato() const {
    int minutos = duracion / 60;
    int segundos = duracion % 60;

    std::ostringstream oss;
    oss << minutos << ":" << std::setw(2) << std::setfill('0') << segundos;
    return oss.str();
}
