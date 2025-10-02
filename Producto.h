//
// Created by Sebas on 10/2/2025.
//

#ifndef ECOMMERCE_PRODUCTO_H
#define ECOMMERCE_PRODUCTO_H

#include <string>

class Producto {
private:
    int id;
    std::string nombre;
    float precio;

public:
    Producto(int id, const std::string& nombre, float precio);
    int getId() const;
    std::string getNombre() const;
    float getPrecio() const;
};

#endif //ECOMMERCE_PRODUCTO_H