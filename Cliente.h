#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Carrito.h"

class Cliente {
private:
    std::string nombre;
    Carrito carrito;

public:
    Cliente(const std::string& nombre);
    std::string getNombre() const;
    Carrito& getCarrito();
};

#endif // CLIENTE_H
