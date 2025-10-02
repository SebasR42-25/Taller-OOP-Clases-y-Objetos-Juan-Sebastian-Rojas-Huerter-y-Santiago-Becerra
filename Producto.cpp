//
// Created by Sebas on 10/2/2025.
//

#include "Producto.h"

Producto::Producto(int id, const std::string& nombre, float precio)
    : id(id), nombre(nombre), precio(precio) {}

int Producto::getId() const { return id; }
std::string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
