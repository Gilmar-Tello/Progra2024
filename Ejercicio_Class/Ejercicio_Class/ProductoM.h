#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ProductoM { // Cambio de nombre de la clase Producto a ProductoM
private:
    string nombre;
    float precio;
    int cantidadInventario;

public:
    // Constructor
    ProductoM(string nombre, float precio, int cantidadInventario) {
        this->nombre = nombre;
        this->precio = precio;
        this->cantidadInventario = cantidadInventario;
    }

    // M�todos para obtener los atributos
    string obtenerNombre() {
        return nombre;
    }

    float obtenerPrecio() {
        return precio;
    }

    int obtenerCantidadInventario() {
        return cantidadInventario;
    }

    // M�todo para actualizar la cantidad en inventario
    void actualizarInventario(int cantidad) {
        cantidadInventario -= cantidad;
    }
};
