#include "Cliente.h"

Cliente::Cliente(const std::string& nombre) : nombre(nombre) {}

std::string Cliente::getNombre() const { return nombre; }
Carrito& Cliente::getCarrito() { return carrito; }
