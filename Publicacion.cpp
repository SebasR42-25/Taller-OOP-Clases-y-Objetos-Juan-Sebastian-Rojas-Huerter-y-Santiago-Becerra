#include "Publicacion.h"
#include <iostream>
using namespace std;

Publicacion::Publicacion(string img, string desc) : imagen(img), descripcion(desc), likes(0) {}
void Publicacion::darLike() { likes++; }
void Publicacion::agregarComentario(const Comentario& c) { comentarios.push_back(c); }

void Publicacion::mostrarInfo() const {
    cout << "\n--- Publicacion ---" << endl;
    cout << "Imagen: " << imagen << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Likes: " << likes << endl;
    cout << "Comentarios:" << endl;
    if (comentarios.empty()) cout << " (Sin comentarios)" << endl;
    for (const auto& c : comentarios) {
        cout << " - " << c.getInfo() << endl;
    }
    cout << "-------------------" << endl;
}
