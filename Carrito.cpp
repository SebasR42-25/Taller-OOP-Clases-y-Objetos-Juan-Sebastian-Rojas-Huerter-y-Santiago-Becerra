//
// Created by Sebas on 10/2/2025.
//

#include "Carrito.h"
#include <iostream>
#include <iomanip>

void Carrito::agregarProducto(const Producto& p) {
    productos.push_back(p);
}

void Carrito::eliminarProducto(int id) {
    for (auto it = productos.begin(); it != productos.end(); ++it) {
        if (it->getId() == id) {
            productos.erase(it);
            break;
        }
    }
}

void Carrito::mostrarContenido() const {
    std::cout << "\n=== Contenido del Carrito ===\n";
    if (productos.empty()) {
        std::cout << "El carrito está vacío.\n";
        return;
    }
    for (const auto& p : productos) {
        std::cout << "ID: " << p.getId()
                  << " | " << p.getNombre()
                  << " | $" << std::fixed << std::setprecision(2) << p.getPrecio()
                  << "\n";
    }
    std::cout << "TOTAL: $" << std::fixed << std::setprecision(2) << calcularTotal() << "\n";
}

float Carrito::calcularTotal() const {
    float total = 0.0f;
    for (const auto& p : productos) total += p.getPrecio();
    return total;
}

void Carrito::facturar() const {
    std::cout << "\n===== FACTURA =====\n";
    if (productos.empty()) {
        std::cout << "No hay productos en el carrito.\n";
        return;
    }
    for (const auto& p : productos) {
        std::cout << p.getNombre()
                  << " - $" << std::fixed << std::setprecision(2) << p.getPrecio()
                  << "\n";
    }
    std::cout << "------------------\n";
    std::cout << "TOTAL A PAGAR: $" << std::fixed << std::setprecision(2) << calcularTotal() << "\n";
    std::cout << "==================\n";
}
