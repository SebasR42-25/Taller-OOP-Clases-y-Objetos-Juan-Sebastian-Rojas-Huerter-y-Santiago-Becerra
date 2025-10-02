#include "Usuario.h"

Usuario::Usuario(string nombre) : nombreUsuario(nombre) {}
string Usuario::getNombreUsuario() const { return nombreUsuario; }

Publicacion& Usuario::crearPublicacion(string img, string desc) {
    publicaciones.push_back(Publicacion(img, desc));
    return publicaciones.back();
}

vector<Publicacion>& Usuario::getPublicaciones() { return publicaciones; }
bool Usuario::tienePublicaciones() const { return !publicaciones.empty(); }
