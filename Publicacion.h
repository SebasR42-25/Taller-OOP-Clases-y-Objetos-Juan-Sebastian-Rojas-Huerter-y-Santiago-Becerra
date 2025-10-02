//
// Created by Sebas on 10/2/2025.
//

#ifndef REDSOCIAL_PUBLICACION_H
#define REDSOCIAL_PUBLICACION_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Comentario.h"

// ===== Clase Publicacion =====
class Publicacion {
private:
    string imagen;
    string descripcion;
    int likes;
    vector<Comentario> comentarios;
public:
    Publicacion(string img, string desc);
    void darLike();
    void agregarComentario(const Comentario& c);
    void mostrarInfo() const;
};
#endif //REDSOCIAL_PUBLICACION_H