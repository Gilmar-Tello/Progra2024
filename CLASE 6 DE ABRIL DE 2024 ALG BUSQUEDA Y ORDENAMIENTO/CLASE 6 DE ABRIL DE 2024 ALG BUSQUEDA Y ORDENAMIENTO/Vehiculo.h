#pragma once
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Constructor
    Vehiculo(const std::string& marca, const std::string& modelo, int anio)
        : marca(marca), modelo(modelo), anio(anio) {}

    // Método virtual puro para describir el vehículo
    virtual void describir() const = 0;

    // Método para obtener la marca del vehículo
    std::string obtenerMarca() const {
        return marca;
    }

    // Método para obtener el modelo del vehículo
    std::string obtenerModelo() const {
        return modelo;
    }

    // Método para obtener el año del vehículo
    int obtenerAnio() const {
        return anio;
    }

    // Método virtual para calcular el costo del seguro
    virtual float calcularCostoSeguro() const = 0;

    // Método virtual para calcular el impuesto de circulación
    virtual float calcularImpuestoCirculacion() const = 0;
};


