//
// Created by Sebas on 10/2/2025.
//

#ifndef REDSOCIAL_USUARIO_H
#define REDSOCIAL_USUARIO_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Publicacion.h"

// ===== Clase Usuario =====
class Usuario {
private:
    string nombreUsuario;
    vector<Publicacion> publicaciones;
public:
    Usuario(string nombre);
    string getNombreUsuario() const;
    Publicacion& crearPublicacion(string img, string desc);
    vector<Publicacion>& getPublicaciones();
    bool tienePublicaciones() const;
};
#endif //REDSOCIAL_USUARIO_H