//
// Created by Sebas on 10/2/2025.
//

#ifndef REDSOCIAL_COMENTARIO_H
#define REDSOCIAL_COMENTARIO_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Usuario;

// ===== Clase Comentario =====
class Comentario {
private:
    string texto;
    Usuario* autor;
public:
    Comentario(string t, Usuario* a);
    string getInfo() const;
};
#endif //REDSOCIAL_COMENTARIO_H