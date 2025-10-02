#include "Comentario.h"
#include "Usuario.h"

Comentario::Comentario(string t, Usuario* a) : texto(t), autor(a) {}
string Comentario::getInfo() const {
    return autor->getNombreUsuario() + ": " + texto;
}
