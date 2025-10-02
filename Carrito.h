//
// Created by Sebas on 10/2/2025.
//

#ifndef ECOMMERCE_CARRITO_H
#define ECOMMERCE_CARRITO_H

#include <vector>
#include "Producto.h"

class Carrito {
private:
    std::vector<Producto> productos;

public:
    void agregarProducto(const Producto& p);
    void eliminarProducto(int id);
    void mostrarContenido() const;
    float calcularTotal() const;
    void facturar() const;
};

#endif //ECOMMERCE_CARRITO_H